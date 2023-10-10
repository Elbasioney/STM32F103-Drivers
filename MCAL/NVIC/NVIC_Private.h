#ifndef _NVIC_PRIVATE_H_
#define _NVIC_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"

#define NVIC_BASE_ADDRESS 0xE000E100



#define NVIC_ISER0  *((volatile u32*)0xE000E100)  /* Enable External interrupts from 0 to 31 */
#define NVIC_ISER1  *((volatile u32*)0xE000E104)  /* Enable External interrupts from 32 to 63 */

#define NVIC_ICER0  *((volatile u32*)0xE000E180)  /* Disable External interrupts from 0 to 31 */
#define NVIC_ICER1  *((volatile u32*)0xE000E184)  /* Disable External interrupts from 32 to 63 */


#define NVIC_ISPR0  *((volatile u32*)0xE000E200)  /* Set pending Flag for External interrupts from 0 to 31 */
#define NVIC_ISPR1  *((volatile u32*)0xE000E204)  /* Set pending Flag for External interrupts from 32 to 63 */


#define NVIC_ICPR0  *((volatile u32*)0xE000E280)  /* Clear pending Flag for External interrupts from 0 to 31 */
#define NVIC_ICPR1  *((volatile u32*)0xE000E284)  /* Clear pending Flag for External interrupts from 32 to 63 */


#define NVIC_IABR0  *((volatile u32*)0xE000E300)  /* Read Active Flag for External interrupts from 0 to 31 */
#define NVIC_IABR1  *((volatile u32*)0xE000E304)  /* Read Active Flag for External interrupts from 32 to 63 */



/*
typedef struct {
	u32 RESRVER_1  : 4 ;
	u32 PRIORITY_1 : 4 ;
	u32 RESRVER_2  : 4 ;
	u32 PRIORITY_2 : 4 ;
	u32 RESRVER_3  : 4 ;
	u32 PRIORITY_3 : 4 ;
	u32 RESRVER_4  : 4 ;
	u32 PRIORITY_4 : 4 ;
}NVIC_IPR_t;
*/



#define NVIC_IPR   ((volatile u8*)0xE000E400)     /* Set software priority */
#define SCB_AIRCR  *((volatile u32*)0xE000ED0C)   /* Control Group and sub group Priorities */


#endif

