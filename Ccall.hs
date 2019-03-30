module Ccall where

import           Data.Word


foreign import ccall "mylib.h gpio_setup" gpio_setup :: IO ()
foreign import ccall "mylib.h wait" wait :: Word -> IO ()

foreign import ccall "mylib.h gpioB" gpioB :: IO Word32
foreign import ccall "mylib.h gpioC" gpioC :: IO Word32
foreign import ccall "mylib.h gpioD" gpioD :: IO Word32
foreign import ccall "mylib.h gpioE" gpioE :: IO Word32
foreign import ccall "mylib.h gpioF" gpioF :: IO Word32
foreign import ccall "mylib.h gpioG" gpioG :: IO Word32

foreign import ccall "mylib.h gpio0" gpio0 :: IO Word16
foreign import ccall "mylib.h gpio1" gpio1 :: IO Word16
foreign import ccall "mylib.h gpio2" gpio2 :: IO Word16
foreign import ccall "mylib.h gpio3" gpio3 :: IO Word16
foreign import ccall "mylib.h gpio4" gpio4 :: IO Word16
foreign import ccall "mylib.h gpio5" gpio5 :: IO Word16
foreign import ccall "mylib.h gpio6" gpio6 :: IO Word16
foreign import ccall "mylib.h gpio7" gpio7 :: IO Word16
foreign import ccall "mylib.h gpio8" gpio8 :: IO Word16
foreign import ccall "mylib.h gpio9" gpio9 :: IO Word16
foreign import ccall "mylib.h gpio10" gpio10 :: IO Word16
foreign import ccall "mylib.h gpio11" gpio11 :: IO Word16
foreign import ccall "mylib.h gpio12" gpio12 :: IO Word16
foreign import ccall "mylib.h gpio13" gpio13 :: IO Word16
foreign import ccall "mylib.h gpio14" gpio14 :: IO Word16
foreign import ccall "mylib.h gpio15" gpio15 :: IO Word16

foreign import ccall "libopencm3/stm32/gpio.h gpio_set" gpio_set :: Word32 -> Word16 -> IO ()
foreign import ccall "libopencm3/stm32/gpio.h gpio_clear" gpio_clear :: Word32 -> Word16 -> IO ()

type Port = Word32
type Pin = Word16
