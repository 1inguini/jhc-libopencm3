module Lib.Ccall where

import           Data.Word

type Port = Word32
type Pin = Word16

foreign import ccall "mylib.h gpio_setup" gpioSetup :: IO ()
foreign import ccall "mylib.h wait" wait :: Word -> IO ()

foreign import ccall "mylib.h gpioA" gpioA :: IO Port
foreign import ccall "mylib.h gpioB" gpioB :: IO Port
foreign import ccall "mylib.h gpioC" gpioC :: IO Port
foreign import ccall "mylib.h gpioD" gpioD :: IO Port
foreign import ccall "mylib.h gpioE" gpioE :: IO Port
foreign import ccall "mylib.h gpioF" gpioF :: IO Port
foreign import ccall "mylib.h gpioG" gpioG :: IO Port

foreign import ccall "mylib.h gpio0" gpio0 :: IO Pin
foreign import ccall "mylib.h gpio1" gpio1 :: IO Pin
foreign import ccall "mylib.h gpio2" gpio2 :: IO Pin
foreign import ccall "mylib.h gpio3" gpio3 :: IO Pin
foreign import ccall "mylib.h gpio4" gpio4 :: IO Pin
foreign import ccall "mylib.h gpio5" gpio5 :: IO Pin
foreign import ccall "mylib.h gpio6" gpio6 :: IO Pin
foreign import ccall "mylib.h gpio7" gpio7 :: IO Pin
foreign import ccall "mylib.h gpio8" gpio8 :: IO Pin
foreign import ccall "mylib.h gpio9" gpio9 :: IO Pin
foreign import ccall "mylib.h gpio10" gpio10 :: IO Pin
foreign import ccall "mylib.h gpio11" gpio11 :: IO Pin
foreign import ccall "mylib.h gpio12" gpio12 :: IO Pin
foreign import ccall "mylib.h gpio13" gpio13 :: IO Pin
foreign import ccall "mylib.h gpio14" gpio14 :: IO Pin
foreign import ccall "mylib.h gpio15" gpio15 :: IO Pin


foreign import ccall "mylib.h gpio_mode_input" gpioModeInput :: IO Word8
foreign import ccall "mylib.h gpio_mode_output_2_mhz" gpioModeOutput2Mhz :: IO Word8
foreign import ccall "mylib.h gpio_mode_output_50_mhz" gpioModeOutput50Mhz :: IO Word8


foreign import ccall "mylib.h gpio_cnf_input_pull_updown" gpioCnfInputPullUpdown :: IO Word8
foreign import ccall "mylib.h gpio_cnf_output_pushpull" gpioCnfOutputPushpull :: IO Word8

foreign import ccall "mylib.h rcc_periph_clock_enable_gpioA" rccPeriphClockEnableGpioA :: IO ()
foreign import ccall "mylib.h rcc_periph_clock_enable_gpioB" rccPeriphClockEnableGpioB :: IO ()
foreign import ccall "mylib.h rcc_periph_clock_enable_usart1" rccPeriphClockEnableUsart1 :: IO ()
foreign import ccall "mylib.h rcc_periph_clock_enable_usart2" rccPeriphClockEnableUsart2 :: IO ()



foreign import ccall "libopencm3/stm32/gpio.h gpio_set_mode" gpioSetMode :: Port -> Word8 -> Word8 -> Pin -> IO ()

foreign import ccall "libopencm3/stm32/gpio.h gpio_set" gpioSet :: Port -> Pin -> IO ()
foreign import ccall "libopencm3/stm32/gpio.h gpio_clear" gpioClear :: Port -> Pin -> IO ()

foreign import ccall "libopencm3/stm32/gpio.h gpio_get" gpioGet :: Port -> Pin -> IO Word16
