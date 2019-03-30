#ifndef MYLIB_H  //二重でincludeされることを防ぐ
#define MYLIB_H

typedef unsigned int uint32;
typedef unsigned short uint16;

void main(void);

// uint16 gpioA(void);
// uint16 gpioB(void);
// uint16 gpioC(void);
// uint16 gpioD(void);
// uint16 gpioE(void);
// uint16 gpioF(void);
// uint16 gpioG(void);

// uint32 gpio0(void);
// uint32 gpio1(void);
// uint32 gpio2(void);
// uint32 gpio3(void);
// uint32 gpio4(void);
// uint32 gpio5(void);
// uint32 gpio6(void);
// uint32 gpio7(void);
// uint32 gpio8(void);
// uint32 gpio9(void);
// uint32 gpio10(void);
// uint32 gpio11(void);
// uint32 gpio12(void);
// uint32 gpio13(void);
// uint32 gpio14(void);
// uint32 gpio15(void);
// uint32 gpio_all(void);

// call this
void gpio_setup(void);
void wait(uint32);

#endif
