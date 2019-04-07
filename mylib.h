#ifndef MYLIB_H  //二重でincludeされることを防ぐ
#define MYLIB_H

#include <stdint.h>

void main(void);

// uint16_t gpioA(void);
// uint16_t gpioB(void);
// uint16_t gpioC(void);
// uint16_t gpioD(void);
// uint16_t gpioE(void);
// uint16_t gpioF(void);
// uint16_t gpioG(void);

// uint32_t gpio0(void);
// uint32_t gpio1(void);
// uint32_t gpio2(void);
// uint32_t gpio3(void);
// uint32_t gpio4(void);
// uint32_t gpio5(void);
// uint32_t gpio6(void);
// uint32_t gpio7(void);
// uint32_t gpio8(void);
// uint32_t gpio9(void);
// uint32_t gpio10(void);
// uint32_t gpio11(void);
// uint32_t gpio12(void);
// uint32_t gpio13(void);
// uint32_t gpio14(void);
// uint32_t gpio15(void);
// uint32_t gpio_all(void);

uint8_t gpio_mode_input(void);
uint8_t gpio_mode_output_2_mhz(void);
uint8_t gpio_mode_output_50_mhz(void);

uint8_t gpio_cnf_input_pull_updown(void);
uint8_t gpio_cnf_output_pushpull(void);

void rcc_periph_clock_enable_gpioA(void);
void rcc_periph_clock_enable_gpioB(void);
void rcc_periph_clock_enable_gpioC(void);
void rcc_periph_clock_enable_gpioD(void);
void rcc_periph_clock_enable_gpioE(void);
void rcc_periph_clock_enable_gpioF(void);
void rcc_periph_clock_enable_gpioG(void);

void rcc_periph_clock_enable_usart1(void);
void rcc_periph_clock_enable_usart2(void);

// call this
void gpio_setup(void);
void wait(uint32_t);

#endif
