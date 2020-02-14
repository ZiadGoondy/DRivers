/*
 * GPIO.h
 *
 *  Created on: Feb 14, 2020
 *      Author: Hardware
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "bitoperations.h"

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORTF 5

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/**************Configurations**************/
#define GPIO_BUS AHB
/******************************************/
#define AHB 1
#define APB 0

#define Degital 1
#define Analog 0

#define Input 0
#define Output 1

#define HIGH 1
#define LOW 0
void GPIO_PORT_INIT (U8 port);
void GPIO_PIN_Mode (U8 port , U8 Pin ,U8 mode);
void GPIO_SET_DIR (U8 port , U8 Pin , U8 dir);
void GPIO_PAD_Config (U8 port , U8 Pin );
void GPIO_SET_Val (U8 port , U8 Pin ,U8 val);
U8 GPIO_GET_val (U8 port , U8 Pin);



#endif /* GPIO_H_ */
