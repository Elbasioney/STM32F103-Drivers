#ifndef _EXTI_INTERFACE_H_
#define _EXTI_INTERFACE_H_


#include "../../LIB/STD_TYPES.h"


void EXTI_ChangeLineMode(u8 line , u8 mode );
void EXTI_EnableEXTI(u8 line);
void EXTI_DisableEXTI(u8 line);
void EXTI_SoftwareTrigger(u8 line);
void EXTI_SetCallBack(u8 line , void (*Copy_CallBack)(void));



#define LINE0  0 
#define LINE1  1 
#define LINE2  2 
#define LINE3  3 
#define LINE4  4 
#define LINE5  5 
#define LINE6  6 
#define LINE7  7 
#define LINE8  8 
#define LINE9  9 
#define LINE10 10 
#define LINE11 11
#define LINE12 12 
#define LINE13 13 
#define LINE14 14 
#define LINE15 15 


#define EXTI_RISING_EDGE    0
#define EXTI_FALLING_EDGE   1
#define EXTI_ON_CHANGE      2





#endif 
