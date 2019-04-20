module Main where

import           Data.Char
import           Data.List.Split
import           System.Directory
import           System.Environment (getArgs)

snakeToCamel :: String -> String
snakeToCamel ('_':x:xs) = toUpper x:snakeToCamel xs
snakeToCamel (x:xs)     = x:snakeToCamel xs
snakeToCamel x          = x

header =
  "module Lib.Ccall where\n" ++
  "\n" ++
  "import           Data.Word\n" ++
  "\n" ++
  "type Port = Word32\n" ++
  "type Pin = Word16\n\n"

importing libfile func funcType =
  "foreign import ccall \"" ++ libfile ++ ".h " ++ func ++ "\" " ++ snakeToCamel func ++ " :: " ++ funcType ++ "\n"

ports = chunksOf 1 ['A'..'G']
pins = map show [0..15]

gpioPort =
  concatMap (\port -> importing "mylib" ("gpio" ++ port) "IO Port")
  ports

gpioPin =
  concatMap (\pin -> importing "mylib" ("gpio" ++ pin) "IO Port")
  pins

rccPeriphClockEnableGpio =
  concatMap (\port -> importing "mylib" ("rcc_periph_clock_enable_gpio" ++ port) "IO ()")
  ports

rccPeriphClockEnableUsart =
  concatMap (\x -> importing "mylib" ("rcc_periph_clock_enable_usart" ++ x) "IO ()")
  ["1", "2"]

pinmode =
   concatMap (\func -> importing "mylib" func "IO Word8")
      ["gpio_mode_input",
        "gpio_mode_output_2_mhz",
        "gpio_mode_output_50_mhz",
        "gpio_cnf_input_pull_updown",
        "gpio_cnf_output_pushpull"]

gpioH =
  concatMap
  (uncurry (importing "libopencm3/stm32/gpio"))
  [("gpio_set", "Port -> Pin -> IO ()"),
    ("gpio_clear", "Port -> Pin -> IO ()"),
    ("gpio_get", "Port -> Pin -> IO Word16")]

main = do
  [out] <- getArgs
  writeFile out header
  mapM_ (\x -> appendFile out (x ++ "\n"))
    [mylibIO "gpio_setup",
      importing "mylib" "wait" "Word -> IO ()",
      gpioPort,
      gpioPin,
      pinmode,
      rccPeriphClockEnableGpio,
      rccPeriphClockEnableUsart,
      gpioH]
  where
    mylibIO x = importing "mylib" x "IO ()"
