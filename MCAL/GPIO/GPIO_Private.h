

#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_

#include "../../LIB/STD_TYPES.h"


/************************************** FOR PORT A *************************************************/
/************************************************************/
typedef struct{
	u32 PIN0 : 4 ; 
	u32 PIN1 : 4 ;
	u32 PIN2 : 4 ;
	u32 PIN3 : 4 ;
	u32 PIN4 : 4 ;
	u32 PIN5 : 4 ;
	u32 PIN6 : 4 ;
	u32 PIN7 : 4 ;
}PORTA_CRL_t ; 	

#define PORTA_CRL ((volatile  PORTA_CRL_t*)0x40010800)
#define PORTA_CRL_REG *((volatile  u32*)0x40010800)
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN8  : 4 ; 
	u32 PIN9  : 4 ;
	u32 PIN10 : 4 ;
	u32 PIN11 : 4 ;
	u32 PIN12 : 4 ;
	u32 PIN13 : 4 ;
	u32 PIN14 : 4 ;
	u32 PIN15 : 4 ;
}PORTA_CRH_t ; 	

#define PORTA_CRH ((volatile  PORTA_CRH_t*)0x40010804)
#define PORTA_CRH_REG *((volatile  u32*)0x40010804)	
/************************************************************/


/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTA_ODR_t ; 	

#define PORTA_ODR ((volatile  PORTA_ODR_t*)0x4001080C)
#define PORTA_ODR_REG *((volatile  u32*)0x4001080C)
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTA_IDR_t ; 	

#define PORTA_IDR ((volatile  PORTA_IDR_t*)0x40010808)
	
/************************************************************/


/************************************** FOR PORT B *************************************************/


/************************************************************/
typedef struct{
	u32 PIN0 : 4 ; 
	u32 PIN1 : 4 ;
	u32 PIN2 : 4 ;
	u32 PIN3 : 4 ;
	u32 PIN4 : 4 ;
	u32 PIN5 : 4 ;
	u32 PIN6 : 4 ;
	u32 PIN7 : 4 ;
}PORTB_CRL_t ; 	

#define PORTB_CRL ((volatile  PORTB_CRL_t*)0x40010C00)
#define PORTB_CRL_REG *((volatile  u32*)0x40010C00)	
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN8  : 4 ; 
	u32 PIN9  : 4 ;
	u32 PIN10 : 4 ;
	u32 PIN11 : 4 ;
	u32 PIN12 : 4 ;
	u32 PIN13 : 4 ;
	u32 PIN14 : 4 ;
	u32 PIN15 : 4 ;
}PORTB_CRH_t ; 	

#define PORTB_CRH ((volatile  PORTB_CRH_t*)0x40010C04)
#define PORTB_CRH_REG *((volatile  u32*)0x40010C04)
/************************************************************/


/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTB_ODR_t ; 	

#define PORTB_ODR ((volatile  PORTB_ODR_t*)0x40010C0C)
#define PORTB_ODR_REG *((volatile  u32*)0x40010C0C)
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTB_IDR_t ; 	

#define PORTB_IDR ((volatile  PORTB_IDR_t*)0x40010C08)
	
/************************************************************/



/************************************** FOR PORT C *************************************************/


/************************************************************/
typedef struct{
	u32 PIN0 : 4 ; 
	u32 PIN1 : 4 ;
	u32 PIN2 : 4 ;
	u32 PIN3 : 4 ;
	u32 PIN4 : 4 ;
	u32 PIN5 : 4 ;
	u32 PIN6 : 4 ;
	u32 PIN7 : 4 ;
}PORTC_CRL_t ; 	

#define PORTC_CRL ((volatile  PORTC_CRL_t*)0x40011000)
#define PORTC_CRL_REG *((volatile  u32*)0x40011000)
		
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN8  : 4 ; 
	u32 PIN9  : 4 ;
	u32 PIN10 : 4 ;
	u32 PIN11 : 4 ;
	u32 PIN12 : 4 ;
	u32 PIN13 : 4 ;
	u32 PIN14 : 4 ;
	u32 PIN15 : 4 ;
}PORTC_CRH_t ; 	

#define PORTC_CRH ((volatile  PORTC_CRH_t*)0x40011004)
#define PORTC_CRH_REG *((volatile  u32*)0x40011004)
/************************************************************/


/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTC_ODR_t ; 	

#define PORTC_ODR ((volatile  PORTC_ODR_t*)0x4001100C)
#define PORTC_ODR_REG *((volatile  u32*)0x4001100C)
/************************************************************/

/************************************************************/
typedef struct{
	u32 PIN0  : 1 ; 
	u32 PIN1  : 1 ;
	u32 PIN2  : 1 ;
	u32 PIN3  : 1 ;
	u32 PIN4  : 1 ;
	u32 PIN5  : 1 ;
	u32 PIN6  : 1 ;
	u32 PIN7  : 1 ;
	u32 PIN8  : 1 ; 
	u32 PIN9  : 1 ;
	u32 PIN10 : 1 ;
	u32 PIN11 : 1 ;
	u32 PIN12 : 1 ;
	u32 PIN13 : 1 ;
	u32 PIN14 : 1 ;
	u32 PIN15 : 1 ;
	u32 RESERVER : 16 ; 
}PORTC_IDR_t ; 	

#define PORTC_IDR ((volatile  PORTC_IDR_t*)0x40011008)
	
/************************************************************/

#define PORTA_BSSR_REG *((volatile u32*)0x40010810)
#define PORTB_BSSR_REG *((volatile u32*)0x40010C10)
#define PORTC_BSSR_REG *((volatile u32*)0x40011010)
	
#define PORTA_LCKR_REG *((volatile u32*)0x40010414)
#define PORTB_LCKR_REG *((volatile u32*)0x40010C14)
#define PORTC_LCKR_REG *((volatile u32*)0x40011014)

#endif


















