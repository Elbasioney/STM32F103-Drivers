#ifndef _RCC_PRIVTAE_H_
#define  _RCC_PRIVTAE_H_
#include "../../LIB/STD_TYPES.h"

#define RCC_BASE_ADD 0x40021000
#define RCC_CFGR_SW_VAL  0x81

/*#define RCC_CR (*(volatile u32*)(RCC_BASE_ADD + 0x00)) */
/*#define RCC_CR (*(volatile u32*)(RCC_BASE_ADD + 0x00)) */

/****************************************************************/
typedef struct {
	u32 HSION  : 1 ;   /* Enable High speed internal crystal */
	u32 HSIRDY : 1 ;
	u32 RESERVED_1 : 1 ; 
	u32 HSITRIM : 5 ; 
	u32 HSISCAL : 8 ; 
	u32 HSEON  : 1  ;
	u32 HSERDY : 1  ;
	u32 HSEBYP : 1  ;
	u32 CSSON : 1  ;
	u32 RESERVED_2 : 4 ;
	u32 PLLON : 1 ; 
	u32 PLLRDY : 1 ; 
	u32 RESERVED_3 : 6 ; 
}RCC_CR_t;	
	
#define RCC_CR ((volatile RCC_CR_t*)(RCC_BASE_ADD+0x00))
/****************************************************************/


/****************************************************************/
typedef struct {
	u32 SW  : 2 ; 
	u32 SWS : 2 ;
	u32 HPRE : 4 ; 
	u32 PPRE1 : 3 ; 
	u32 PPRE2 : 3 ; 
	u32 ADCPRE  : 2  ;
	u32 PLLSRC : 1  ;
	u32 PLLXTPRE : 1  ;
	u32 PLLMUL : 4  ;
	u32 USBPRE : 1 ;
	u32 RESERVED_1 : 1 ; 
	u32 MCO : 3 ; 
	u32 RESERVED_2 : 5 ; 
}RCC_CFGR_t;	
	
#define RCC_CFGR ((volatile RCC_CFGR_t*)(RCC_BASE_ADD+0x04))
#define RCC_CFGR_REG *((volatile u32*)(RCC_BASE_ADD+0x04))
/****************************************************************/


/****************************************************************/
typedef struct {
	u32 LSIRDYF  : 1 ; 
	u32 LSERDYF  : 1 ;
	u32 HSIRDYF  : 1 ;
	u32 HSERDYF  : 1 ;
	u32 PLLRDYF  : 1 ;
	u32 RESERVED_1  : 2 ;
	u32 CSSF  : 1 ;
	u32 LSIRDYIE  : 1 ; 
	u32 LSERDYIE  : 1 ;
	u32 HSIRDYIE  : 1 ;
	u32 HSERDYIE  : 1 ;
	u32 PLLRDYIE  : 1 ;
	u32 RESERVED_2  : 3 ;
	u32 LSIRDYC  : 1 ; 
	u32 LSERDYC  : 1 ;
	u32 HSIRDYC  : 1 ;
	u32 HSERDYC  : 1 ;
	u32 PLLRDYC  : 1 ;
	u32 RESERVED_3  : 2 ;
	u32 CSSC  : 1 ;
	u32 RESERVED_4  : 8 ;
}RCC_CIR_t;	
	
#define RCC_CIR ((volatile RCC_CIR_t*)(RCC_BASE_ADD+0x08))
/****************************************************************/


/*********************************************************************/
typedef struct {
	u32 AFIORST  : 1 ; 
	u32 RESERVED_1  : 1 ;
	u32 IOPARST  : 1 ;
	u32 IOPBRST  : 1 ;
	u32 IOPCRST  : 1 ;
	u32 IOPDRST  : 1 ; 
	u32 IOPERST  : 1 ;
	u32 IOPFRST  : 1 ;
	u32 IOPGRST  : 1 ;
	u32 ADC1RST  : 1 ;
	u32 ADC2RST  : 1 ;
	u32 TIM1RST  : 1 ; 
	u32 SPI1RST  : 1 ;
	u32 TIM8RST  : 1 ;
	u32 USART1RST  : 1 ;
	u32 ADC3RST  : 1 ;
	u32 RESERVED_2  : 3 ;
	u32 TIM9RST  : 1 ;
	u32 TIM10RST  : 1 ;
	u32 TIM11RST  : 1 ;
	u32 RESERVED_3 : 10  ;
}RCC_APB2RSTR_t;	
	
#define RCC_APB2RSTR ((volatile RCC_APB2RSTR_t*)(RCC_BASE_ADD+0x0C))
/**********************************************************************/


/*********************************************************************/
typedef struct {
	u32 AFIOEN  : 1 ; 
	u32 RESERVED_1  : 1 ;
	u32 IOPAEN  : 1 ;
	u32 IOPBEN  : 1 ;
	u32 IOPCEN  : 1 ;
	u32 IOPDEN  : 1 ; 
	u32 IOPEEN  : 1 ;
	u32 IOPFEN  : 1 ;
	u32 IOPGEN  : 1 ;
	u32 ADC1EN  : 1 ;
	u32 ADC2EN  : 1 ;
	u32 TIM1EN  : 1 ; 
	u32 SPI1EN  : 1 ;
	u32 TIM8EN  : 1 ;
	u32 USART1EN  : 1 ;
	u32 ADC3EN  : 1 ;
	u32 RESERVED_2  : 3 ;
	u32 TIM9EN  : 1 ;
	u32 TIM10EN  : 1 ;
	u32 TIM11EN  : 1 ;
	u32 RESERVED_3 : 10  ;
}RCC_APB2ENR_t;	
	
#define RCC_APB2ENR ((volatile RCC_APB2ENR_t*)(RCC_BASE_ADD+0x18))
/**********************************************************************/


#endif 





