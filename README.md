# jhc-libopencm3-template
Haskell module for using libopencm3 from haskell(jhc), stm32f103 blackpill as default

## Dependence
- arm-none-eabi-gcc
- stack
- jhc (I used https://github.com/csabahruska/jhc-components instead of original jhc)

## Build
edit `device` and `chip` in `Build.hs` to change target board supported by libopencm3

build with `stack path/to/this/repo/Build.hs` in the directory where your `Main.hs` is
