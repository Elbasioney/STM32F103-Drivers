#ifndef _SYSTICK_INTERFACE_H_
#define _SYSTICK_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

void SYSTICK_Init(void);
void SYSTICK_Enable(void);
void SYSTICK_Disable(void);
u32 SYSTICK_ReadElapsedTicks(void);
u32 SYSTICK_ReadRemainingTicks(void);
void SYSTICK_Delay(u32 Ticks);
void SYSTICK_SingleAsync(u32 Ticks, void (*Copy_CallBack)(void));
void SYSTICK_PeriodicAsync(u32 Ticks, void (*Copy_CallBack)(void));









#endif 
