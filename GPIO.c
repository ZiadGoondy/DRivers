/*
 * GPIO.c
 *
 *  Created on: Feb 14, 2020
 *      Author: Hardware
 */
#include "GPIO.h"
#include "Registermap.h"
#include "bitoperations.h"
#include "Std_types.h"

void GPIO_PORT_INIT(U8 port){

        SET_BIT(RCGCGPIO,port);
#if (GPIO_BUS==AHB)

            SET_BIT(GPIOHBCTL,port);

#elif (GPIO_BUS!=AHB)

            CLR_BIT(GPIOHBCTL,port);

#endif
}

void GPIO_PIN_Mode (U8 port , U8 Pin ,U8 mode){
    switch(port){
        case 0:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_A,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_A ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_A ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_A ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_A ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_A,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_A ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_A ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_A ,Pin);
                    SET_BIT(GPIOAMSEL_APB_A ,Pin);
                }

#endif
                break;
        case 1:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_B,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_B ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_B ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_B ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_B ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_B,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_B ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_B ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_B ,Pin);
                    SET_BIT(GPIOAMSEL_APB_B ,Pin);
                }

#endif
                break;
        case 2:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_C,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_C ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_C ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_C ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_C ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_C,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_C ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_C ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_C ,Pin);
                    SET_BIT(GPIOAMSEL_APB_C ,Pin);
                }

#endif
                break;
        case 3:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_D,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_D ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_D ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_D ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_D ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_D,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_D ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_D ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_D ,Pin);
                    SET_BIT(GPIOAMSEL_APB_D ,Pin);
                }

#endif
                break;
        case 4:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_E,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_E ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_E ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_E ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_E ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_E,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_E ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_E ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_E ,Pin);
                    SET_BIT(GPIOAMSEL_APB_E ,Pin);
                }

#endif
                break;
        case 5:
#if (GPIO_BUS==AHB)
                CLR_BIT(GPIOAFSEL_AHB_F,Pin);
                if (mode){
                    SET_BIT(GPIODEN_AHB_F ,Pin);
                    CLR_BIT(GPIOAMSEL_AHB_F ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_AHB_F ,Pin);
                    SET_BIT(GPIOAMSEL_AHB_F ,Pin);
                }

#elif (GPIO_BUS!=AHB)
                CLR_BIT(GPIOAFSEL_APB_F,Pin);
                if (mode){
                    SET_BIT(GPIODEN_APB_F ,Pin);
                    CLR_BIT(GPIOAMSEL_APB_F ,Pin);
                }
                else {
                    CLR_BIT(GPIODEN_APB_F ,Pin);
                    SET_BIT(GPIOAMSEL_APB_F ,Pin);
                }

#endif
                break;
        }

}

void GPIO_SET_DIR (U8 port , U8 Pin , U8 dir){
    switch(port){
    case 0:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_A ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_A ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_A ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_A ,Pin);
            }
#endif
            break;
    case 1:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_B ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_B ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_B ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_B ,Pin);
            }
#endif
            break;
    case 2:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_C ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_C ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_C ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_C ,Pin);
            }
#endif
            break;
    case 3:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_D ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_D ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_D ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_D ,Pin);
            }
#endif
            break;
    case 4:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_E ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_E ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_E ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_E ,Pin);
            }
#endif
            break;
    case 5:
#if(GPIO_BUS==AHB)
            if (dir){
                SET_BIT(GPIODIR_AHB_F ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_AHB_F ,Pin);
            }

#elif (GPIO_BUS!=AHB)
            if (dir){
                SET_BIT(GPIODIR_APB_F ,Pin);
            }
            else {
                CLR_BIT(GPIODIR_APB_F ,Pin);
            }
#endif
            break;
    }
}
void GPIO_SET_Val (U8 port , U8 Pin ,U8 val){
    switch(port){
        case 0:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_A,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_A,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_A ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_A ,Pin);
                }
    #endif
                break;
        case 1:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_B ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_B ,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_B ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_B ,Pin);
                }
    #endif
                break;
        case 2:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_C ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_C ,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_C ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_C ,Pin);
                }
    #endif
                break;
        case 3:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_D ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_D ,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_D ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_D ,Pin);
                }
    #endif
                break;
        case 4:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_E ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_E ,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_E ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_E ,Pin);
                }
    #endif
                break;
        case 5:
    #if(GPIO_BUS==AHB)
                if (val){
                    SET_BIT(GPIODATA_AHB_F ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_AHB_F ,Pin);
                }

    #elif (GPIO_BUS!=AHB)
                if (val){
                    SET_BIT(GPIODATA_APB_F ,Pin);
                }
                else {
                    CLR_BIT(GPIODATA_APB_F ,Pin);
                }
    #endif
                break;
        }
    }
U8 GPIO_GET_val (U8 port , U8 Pin){
    U8 x;
#if (GPIO_BUS==AHB)
    switch (port){
    case 0:
        x=GET_BIT(GPIODATA_AHB_A,Pin);
        break;
    case 1:
        x=GET_BIT(GPIODATA_AHB_B,Pin);
        break;
    case 2:
        x=GET_BIT(GPIODATA_AHB_C,Pin);
        break;
    case 3:
        x=GET_BIT(GPIODATA_AHB_D,Pin);
        break;
    case 4:
        x=GET_BIT(GPIODATA_AHB_E,Pin);
        break;
    case 5:
        x=GET_BIT(GPIODATA_AHB_F,Pin);
        break;
    }


#elif (GPIO_BUS!=AHB)
    switch (port){
        case 0:
            x=GET_BIT(GPIODATA_APB_A,Pin);
            break;
        case 1:
            x=GET_BIT(GPIODATA_APB_B,Pin);
            break;
        case 2:
            x=GET_BIT(GPIODATA_APB_C,Pin);
            break;
        case 3:
            x=GET_BIT(GPIODATA_APB_D,Pin);
            break;
        case 4:
            x=GET_BIT(GPIODATA_APB_E,Pin);
            break;
        case 5:
            x=GET_BIT(GPIODATA_APB_F,Pin);
            break;
#endif
     return x;
}



