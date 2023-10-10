#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

#include "../../LIB/STD_TYPES.h" 


typedef struct {
	u32 IMR ; 
	u32 EMR ;
	u32 RTSR ;
	u32 FTSR ;
	u32 SWIER ;
	u32 PR ;
}EXTI_t;	


#define EXTI ((volatile EXTI_t*)0x40010400)





#endif 
