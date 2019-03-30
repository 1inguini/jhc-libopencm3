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

void main() { _amain(); }

uint32 gpioA() { return GPIOA; }
uint32 gpioB() { return GPIOB; }
uint32 gpioC() { return GPIOC; }
uint32 gpioD() { return GPIOD; }
uint32 gpioE() { return GPIOE; }
uint32 gpioF() { return GPIOF; }
uint32 gpioG() { return GPIOG; }

uint16 gpio0() { return GPIO0; }
uint16 gpio1() { return GPIO1; }
uint16 gpio2() { return GPIO2; }
uint16 gpio3() { return GPIO3; }
uint16 gpio4() { return GPIO4; }
uint16 gpio5() { return GPIO5; }
uint16 gpio6() { return GPIO6; }
uint16 gpio7() { return GPIO7; }
uint16 gpio8() { return GPIO8; }
uint16 gpio9() { return GPIO9; }
uint16 gpio10() { return GPIO10; }
uint16 gpio11() { return GPIO11; }
uint16 gpio12() { return GPIO12; }
uint16 gpio13() { return GPIO13; }
uint16 gpio14() { return GPIO14; }
uint16 gpio15() { return GPIO15; }
uint16 gpio_all() { return GPIO_ALL; }

void gpio_setup(void) {
    /* Enable GPIOA clock. */
    /* Manually: */
    /*RCC_AHB1ENR |= RCC_AHB1ENR_IOPAEN; */
    /* Using API functions: */
    rcc_periph_clock_enable(RCC_GPIOA);
    rcc_periph_clock_enable(RCC_GPIOB);

    /* Set GPIO5 (in GPIO port A) to 'output push-pull'. */
    /* Manually: */
    /*GPIOA_CRH = (GPIO_CNF_OUTPUT_PUSHPULL << (((8 - 8) * 4) + 2)); */
    /*GPIOA_CRH |= (GPIO_MODE_OUTPUT_2_MHZ << ((8 - 8) * 4)); */
    /* Using API functions: */
    // gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO5);
    // gpio_mode_setup(GPIOB, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO5);
    gpio_set_mode(GPIOB, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL,
                  GPIO12);
}

void wait(uint32 milisec) {
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
