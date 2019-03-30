# jhc-libopencm3-template
template for using libopencm3 from haskell(jhc), stm32f103 blackpill as default

## Dependence
- stack
- jhc (I used https://github.com/csabahruska/jhc-components instead of original jhc)

## Build
make a directory `my-project/hs_src` and put your Haskell code in it.

edit `device` and `chip` in `Build.hs` to change target board supported by libopencm3

build with `stack ./Build.hs`
