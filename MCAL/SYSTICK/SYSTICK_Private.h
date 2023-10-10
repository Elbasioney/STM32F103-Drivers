#ifndef _SYSTICK_PRIVATE_H_
#define _SYSTICK_PRIVATE_H_


/*  Includes  */
#include "../../LIB/STD_TYPES.h"

/*  Addresses  */
#define SYSTICK_BASE_ADDRESS  0xE000E010

/*  Registers  */
typedef struct{
	u32 ENABLE : 1 ; 
	u32 INTERRUPT : 1 ; 
	u32 SOURCE : 1 ; 
	u32 RESERVED_1 : 13 ;
	u32 FLAG : 1 ; 
	u32 RESERVED_2 : 15 ;
}STK_CTRL_t;	
	
#define STK_CTRL ((volatile STK_CTRL_t*)0xE000E010)
#define STK_LOAD *((volatile u32*)0xE000E014 )
#define STK_VAL  *((volatile u32*)0xE000E018 )


/*   Masks   */

#define STK_LOAD_MASK    0x00FFFFFF

/*   Private Marcos   */
#define ISR_IDLE     0 
#define ISR_SINGLE   1 
#define ISR_PERIODIC 2 


#endif 
