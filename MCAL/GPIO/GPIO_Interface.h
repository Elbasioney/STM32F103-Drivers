

#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"


#define GPIO_PORTA 0 
#define GPIO_PORTB 1 
#define GPIO_PORTC 2 

#define GPIO_PIN0  0 
#define GPIO_PIN1  1
#define GPIO_PIN2  2 
#define GPIO_PIN3  3 
#define GPIO_PIN4  4 
#define GPIO_PIN5  5 
#define GPIO_PIN6  6 
#define GPIO_PIN7  7 
#define GPIO_PIN8  8 
#define GPIO_PIN9  9 
#define GPIO_PIN10  10 
#define GPIO_PIN11  11
#define GPIO_PIN12  12
#define GPIO_PIN13  13
#define GPIO_PIN14  14
#define GPIO_PIN15  15


#define GPIO_OUTPUT_2MHZ_PP  2 
#define GPIO_OUTPUT_10MHZ_PP 1 
#define GPIO_OUTPUT_50MHZ_PP 3

#define GPIO_OUTPUT_2MHZ_AF_PP  10 
#define GPIO_OUTPUT_10MHZ_AF_PP 9 
#define GPIO_OUTPUT_50MHZ_AF_PP 11

#define GPIO_OUTPUT_2MHZ_OPEN_DRAIN  6 
#define GPIO_OUTPUT_10MHZ_OPEN_DRAIN 5 
#define GPIO_OUTPUT_50MHZ_OPEN_DRAIN 7



#define GPIO_INPUT_ANALOG   0
#define GPIO_INPUT_FLOATING 4
#define GPIO_INPUT_PULLUP   20
#define GPIO_INPUT_PULLDOWN 30

#define GPIO_HIGH 1
#define GPIO_LOW  0 


void GPIO_InitPinMode(u8 port , u8 pin , u8 mode );
void GPIO_WritePinLogic(u8 port , u8 pin , u8 logic );
u8   GPIO_ReadPinLogic(u8 port , u8 pin );
void GPIO_SetPin(u8 port , u8 pin);
void GPIO_ClearPin(u8 port , u8 pin);

#endif 
