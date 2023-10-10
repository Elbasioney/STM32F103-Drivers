#ifndef _AFIO_PRIVATE_H_
#define _AFIO_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"

typedef struct{
	u32 EXTI0 : 4 ;
	u32 EXTI1 : 4 ;
	u32 EXTI2 : 4 ;
	u32 EXTI3 : 4 ;
	u32 RESERVED : 16 ;
}EXTICR_t;	


typedef struct {
		volatile u32 EVCR ;  
		volatile u32 MAPR ; 
		volatile EXTICR_t EXTICR[4];
		volatile u32 MAPR2 ;  
}AFIO_t;	

#define AFIO ((volatile AFIO_t*)0x40010000)

#endif
