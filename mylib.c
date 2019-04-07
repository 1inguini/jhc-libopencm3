// #include "api.h"
// #include "api-asm.h"

// int main(void) {
// 	/* add your own code */
// 	uint32_t rev = 0xaabbccdd;
// 	rev = rev_bytes(rev);
// 	return my_func(rev);
// }

#include "mylib.h"
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/rcc.h>
#include <stdint.h>

void main() { _amain(); }

uint32_t gpioA() { return GPIOA; }
uint32_t gpioB() { return GPIOB; }
uint32_t gpioC() { return GPIOC; }
uint32_t gpioD() { return GPIOD; }
uint32_t gpioE() { return GPIOE; }
uint32_t gpioF() { return GPIOF; }
uint32_t gpioG() { return GPIOG; }

uint16_t gpio0() { return GPIO0; }
uint16_t gpio1() { return GPIO1; }
uint16_t gpio2() { return GPIO2; }
uint16_t gpio3() { return GPIO3; }
uint16_t gpio4() { return GPIO4; }
uint16_t gpio5() { return GPIO5; }
uint16_t gpio6() { return GPIO6; }
uint16_t gpio7() { return GPIO7; }
uint16_t gpio8() { return GPIO8; }
uint16_t gpio9() { return GPIO9; }
uint16_t gpio10() { return GPIO10; }
uint16_t gpio11() { return GPIO11; }
uint16_t gpio12() { return GPIO12; }
uint16_t gpio13() { return GPIO13; }
uint16_t gpio14() { return GPIO14; }
uint16_t gpio15() { return GPIO15; }
uint16_t gpio_all() { return GPIO_ALL; }

uint8_t gpio_mode_input() { return GPIO_MODE_INPUT; }
uint8_t gpio_mode_output_2_mhz() { return GPIO_MODE_OUTPUT_2_MHZ; }
uint8_t gpio_mode_output_50_mhz() { return GPIO_MODE_OUTPUT_50_MHZ; }

uint8_t gpio_cnf_output_pushpull() { return GPIO_CNF_OUTPUT_PUSHPULL; }
uint8_t gpio_cnf_input_pull_updown() { return GPIO_CNF_INPUT_PULL_UPDOWN; }

void rcc_periph_clock_enable_gpioA() { rcc_periph_clock_enable(RCC_GPIOA); }
void rcc_periph_clock_enable_gpioB() { rcc_periph_clock_enable(RCC_GPIOB); }
void rcc_periph_clock_enable_gpioC() { rcc_periph_clock_enable(RCC_GPIOC); }
void rcc_periph_clock_enable_gpioD() { rcc_periph_clock_enable(RCC_GPIOD); }
void rcc_periph_clock_enable_gpioE() { rcc_periph_clock_enable(RCC_GPIOE); }
void rcc_periph_clock_enable_gpioF() { rcc_periph_clock_enable(RCC_GPIOF); }
void rcc_periph_clock_enable_gpioG() { rcc_periph_clock_enable(RCC_GPIOG); }

void rcc_periph_clock_enable_usart1() { rcc_periph_clock_enable(RCC_USART1); }
void rcc_periph_clock_enable_usart2() { rcc_periph_clock_enable(RCC_USART2); }

void wait(uint32_t milisec) {
    int i;
    for (i = 0; i < milisec; i++) { /* Wait a bit. */
        __asm__("nop");
    }
}

// int main(void) {
//   int i;

//   gpio_setup();

//   /* Blink the LED (PC8) on the board. */
//   while (1) {
//     /* Manually: */
//     /* GPIOA_BSRR = GPIO5; */           /* LED off */
//     /* for (i = 0; i < 1000000; i++) */ /* Wait a bit. */
//     /*	__asm__("nop"); */
//     /* GPIOA_BRR = GPIO5; */            /* LED on */
//     /* for (i = 0; i < 1000000; i++) */ /* Wait a bit. */
//     /*	__asm__("nop"); */

//     /* Using API functions gpio_set()/gpio_clear(): */
//     /* gpio_set(GPIOA, GPIO5); */       /* LED off */
//     /* for (i = 0; i < 1000000; i++) */ /* Wait a bit. */
//     /*	__asm__("nop"); */
//     /* gpio_clear(GPIOA, GPIO5); */     /* LED on */
//     /* for (i = 0; i < 1000000; i++) */ /* Wait a bit. */
//     /*	__asm__("nop"); */

//     /* Using API function gpio_toggle(): */
//     gpio_toggle(GPIOA, GPIO5);      /* LED on/off */
//     gpio_toggle(GPIOB, GPIO5);      /* LED on/off */
//     for (i = 0; i < 1000000; i++) { /* Wait a bit. */
//       __asm__("nop");
//     }
//   }

//   return 0;
// }
