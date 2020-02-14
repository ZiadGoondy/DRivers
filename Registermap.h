/*
 * Registermap.h
 *
 *  Created on: Feb 8, 2020
 *      Author: Hardware
 */

#ifndef REGISTERMAP_H_
#define REGISTERMAP_H_



#define RCGCGPIO        (*((volatile U32 *)0x400FE608))
#define GPIOHBCTL       (*((volatile U32 *)0x400FE06C))

#define GPIODIR_AHB_A       (*((volatile U32 *)0x40058400))
#define GPIODIR_APB_A       (*((volatile U32 *)0x40004400))
#define GPIODIR_AHB_B       (*((volatile U32 *)0x40059400))
#define GPIODIR_APB_B       (*((volatile U32 *)0x40005400))
#define GPIODIR_AHB_C       (*((volatile U32 *)0x4005A400))
#define GPIODIR_APB_C       (*((volatile U32 *)0x40006400))
#define GPIODIR_AHB_D       (*((volatile U32 *)0x4005B400))
#define GPIODIR_APB_D       (*((volatile U32 *)0x40007400))
#define GPIODIR_AHB_E       (*((volatile U32 *)0x4005C400))
#define GPIODIR_APB_E       (*((volatile U32 *)0x40024400))
#define GPIODIR_AHB_F       (*((volatile U32 *)0x4005D400))
#define GPIODIR_APB_F       (*((volatile U32 *)0x40025400))

#define GPIOAFSEL_AHB_A       (*((volatile U32 *)0x40058420))
#define GPIOAFSEL_APB_A       (*((volatile U32 *)0x40004420))
#define GPIOAFSEL_AHB_B       (*((volatile U32 *)0x40059420))
#define GPIOAFSEL_APB_B       (*((volatile U32 *)0x40005420))
#define GPIOAFSEL_AHB_C       (*((volatile U32 *)0x4005A420))
#define GPIOAFSEL_APB_C       (*((volatile U32 *)0x40006420))
#define GPIOAFSEL_AHB_D       (*((volatile U32 *)0x4005B420))
#define GPIOAFSEL_APB_D       (*((volatile U32 *)0x40007420))
#define GPIOAFSEL_AHB_E       (*((volatile U32 *)0x4005C420))
#define GPIOAFSEL_APB_E       (*((volatile U32 *)0x40024420))
#define GPIOAFSEL_AHB_F       (*((volatile U32 *)0x4005D420))
#define GPIOAFSEL_APB_F       (*((volatile U32 *)0x40025420))

#define GPIODEN_AHB_A       (*((volatile U32 *)0x4005851C))
#define GPIODEN_APB_A       (*((volatile U32 *)0x4000451C))
#define GPIODEN_AHB_B       (*((volatile U32 *)0x4005951C))
#define GPIODEN_APB_B       (*((volatile U32 *)0x4000551C))
#define GPIODEN_AHB_C       (*((volatile U32 *)0x4005A51C))
#define GPIODEN_APB_C       (*((volatile U32 *)0x4000651C))
#define GPIODEN_AHB_D       (*((volatile U32 *)0x4005B51C))
#define GPIODEN_APB_D       (*((volatile U32 *)0x4000751C))
#define GPIODEN_AHB_E       (*((volatile U32 *)0x4005C51C))
#define GPIODEN_APB_E       (*((volatile U32 *)0x4002451C))
#define GPIODEN_AHB_F       (*((volatile U32 *)0x4005D51C))
#define GPIODEN_APB_F       (*((volatile U32 *)0x4002551C))

#define GPIOAMSEL_AHB_A       (*((volatile U32 *)0x40058528))
#define GPIOAMSEL_APB_A       (*((volatile U32 *)0x40004528))
#define GPIOAMSEL_AHB_B       (*((volatile U32 *)0x40059528))
#define GPIOAMSEL_APB_B       (*((volatile U32 *)0x40005528))
#define GPIOAMSEL_AHB_C       (*((volatile U32 *)0x4005A528))
#define GPIOAMSEL_APB_C       (*((volatile U32 *)0x40006528))
#define GPIOAMSEL_AHB_D       (*((volatile U32 *)0x4005B528))
#define GPIOAMSEL_APB_D       (*((volatile U32 *)0x40007528))
#define GPIOAMSEL_AHB_E       (*((volatile U32 *)0x4005C528))
#define GPIOAMSEL_APB_E       (*((volatile U32 *)0x40024528))
#define GPIOAMSEL_AHB_F       (*((volatile U32 *)0x4005D528))
#define GPIOAMSEL_APB_F       (*((volatile U32 *)0x40025528))

#define GPIODATA_AHB_A       (*((volatile U32 *)0x400583FC))
#define GPIODATA_APB_A       (*((volatile U32 *)0x400043FC))
#define GPIODATA_AHB_B       (*((volatile U32 *)0x400593FC))
#define GPIODATA_APB_B       (*((volatile U32 *)0x400053FC))
#define GPIODATA_AHB_C       (*((volatile U32 *)0x4005A3FC))
#define GPIODATA_APB_C       (*((volatile U32 *)0x400063FC))
#define GPIODATA_AHB_D       (*((volatile U32 *)0x4005B3FC))
#define GPIODATA_APB_D       (*((volatile U32 *)0x400073FC))
#define GPIODATA_AHB_E       (*((volatile U32 *)0x4005C3FC))
#define GPIODATA_APB_E       (*((volatile U32 *)0x400243FC))
#define GPIODATA_AHB_F       (*((volatile U32 *)0x4005D3FC))
#define GPIODATA_APB_F       (*((volatile U32 *)0x400253FC))



#endif /* REGISTERMAP_H_ */

