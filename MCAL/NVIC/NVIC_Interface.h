#ifndef _NVIC_INTERFACE_H_
#define _NVIC_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"


#define GROUP0 0   
#define GROUP1 1  
#define GROUP2 2   
#define GROUP3 3 

#define SUB_GROUP0 0   
#define SUB_GROUP1 1  
#define SUB_GROUP2 2   
#define SUB_GROUP3 3 


#define NVIC_ENABLE_EXTI0_INTERRUPT 6
#define NVIC_ENABLE_EXTI1_INTERRUPT 7
#define NVIC_ENABLE_EXTI2_INTERRUPT 8
#define NVIC_ENABLE_EXTI3_INTERRUPT 9
#define NVIC_ENABLE_EXTI4_INTERRUPT 10

void NVIC_EnableInterrupt(u8 interrupt);
void NVIC_DisableInterrupt(u8 interrupt);
void NVIC_SetPendingFlag(u8 interrupt);
void NVIC_ClearPendingFlag(u8 interrupt);
u8 NVIC_ReadActiveFlagStatus(u8 interrupt);
void NVIC_SetPriority( u8 peripheral_index , u8 group_priority , u8 sub_group_priority);
void NVIC_Init(void);



#endif 
