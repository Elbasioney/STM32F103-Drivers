
#include "RCC_Config.h"
#include "RCC_interface.h"
#include "RCC_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


/**
* -----------------------------------------------------------------------------------------------------------
*	@FUNC				: void RCC_InitSysClock(void).
*								This function is used to configure the system clock source (PLL, HSI, or HSE).
*               Also used to configure the prescalers of (AHB , APB1 , APB2 , ADC).
                Also used to configure the PLL presacler and multiplication factor.
								
* @PARA[IN]		:	No thing.
*
*	@PARA[IN]		:	No thing.
*
*	@RETVAL			: Void.
*
* @NOTE 			: MAKE SURE THE SOURCE YOU WILL SELECT IS ENABLED BEFORE SELECTING IT.
*               ALSO MAKE SURE OF YOUR CONFIGURATIONS IN @FILE "RCC_Cfg.h" FILE.
* -----------------------------------------------------------------------------------------------------------
*/
void RCC_InitSysClock(void){	   
	
		RCC_CFGR_REG = 0  ;
		RCC_CFGR_REG = RCC_CFGR_SW_VAL ; 
		RCC_CFGR->HPRE   = RCC_AHB_PRESCALER_SET  ;
		RCC_CFGR->PPRE1  = RCC_APB1_PRESCALER_SET ; 
		RCC_CFGR->PPRE2  = RCC_APB2_PRESCALER_SET ;
		RCC_CFGR->ADCPRE = RCC_ADC_PRESCALER_SET  ;
		
#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		RCC_CR->HSEON = 1  ;
		u8 time_out = 200 ; 
		while((RCC_CR->HSERDY == 0) && time_out != 0 ){
				time_out--;
		}	
		RCC_CR->HSERDY = 1  ; /* Clear HSE ready flag */
		RCC_CR->HSEBYP = 0 ;	/* Disable Bypass */ 
	  RCC_CFGR->SW = 1 ; 
		
	  
    
		
#elif RCC_CLOCK_TYPE == RCC_HSE_RC 	
		RCC_CR->HSEON = 1  ;
		while((RCC_CR->HSERDY == 0)){}	
		RCC_CR->HSERDY = 1  ; /* Clear SHE ready flag */
		RCC_CR->HSEBYP = 1 ;	/* Enable Bypass */ 
	  RCC_CFGR->SW = 1 ; 
#elif RCC_CLOCK_TYPE == RCC_HSI 	
		RCC_CR->HSION = 1  ; 
		while((RCC_CR->HSIRDY == 0)){}
		RCC_CR->HSIRDY = 1  ; /* Clear HSI ready flag */
		RCC_CFGR->SW = 0 ;
#elif RCC_CLOCK_TYPE == RCC_PLL
		RCC_CFGR->PLLXTPRE = RCC_PLL_HSE_SET ; 
		RCC_CFGR->PLLSRC = RCC_PLL_SOURCE ; 
		RCC_CFGR->PLLMUL = RCC_PLL_MUL_FACTOR ; 
		RCC_CFGR->SW = 2 ; 
		RCC_CR->PLLON = 1  ;
		u8 time_out = 100 ;	
		while((RCC_CR->PLLRDY == 0) && (time_out!= 0 )){
			time_out--;
			
		}
		
		
#else 
		#error("You chosed wrong clock type")
#endif	
		 
}


/**
* -----------------------------------------------------------------------------------------------------------
*	@FUNC				: void RCC_EnableClock(u8 dest).
*								This function is used to enable a peripheral clock.
*
* @PARA[IN]		:	"dest". 
*								This parameter is used to choose the peripheral you want to enable. 
*
*	@PARA[IN]		:	No thing.
*
*	@RETVAL			: Void.
*
* @NOTE 			: MAKE SURE THE PERIPHERAL YOU WANT TO ENABLE IS ALREADY DEFINED IN THE @FILE "RCC_Interface.h" FILE.
* -----------------------------------------------------------------------------------------------------------
*/
void RCC_EnableClock(u8 dest){
		
		switch(dest){
			case RCC_ENABLE_GPIOA :
					RCC_APB2ENR->IOPAEN = 1 ; 
				break;
			case RCC_ENABLE_GPIOB :
					RCC_APB2ENR->IOPBEN = 1 ; 
				break;
			case RCC_ENABLE_GPIOC :
					RCC_APB2ENR->IOPCEN = 1 ; 
				break;
			case RCC_ENABLE_ADC1 :
					RCC_APB2ENR->ADC1EN = 1 ; 
				break ; 
			case RCC_ENABLE_SPI1 :
					RCC_APB2ENR->SPI1EN = 1 ; 
				break ; 
			case RCC_ENABLE_TIMER10 :
					RCC_APB2ENR->TIM10EN = 1 ; 
				break ; 
			case RCC_ENABLE_UART1 :
					RCC_APB2ENR->USART1EN = 1 ; 
				break ; 
			default :
				
				break ; 
		}
	
}	


/**
* -----------------------------------------------------------------------------------------------------------
*	@FUNC				: void RCC_DisableClock(u8 dest).
*								This function is used to disable a peripheral clock.
*
* @PARA[IN]		:	"dest". 
*								This parameter is used to choose the peripheral you want to disable. 
*
*	@PARA[IN]		:	No thing.
*
*	@RETVAL			: Void.
*
* @NOTE 			: MAKE SURE THE PERIPHERAL YOU WANT TO DISABLE IS ALREADY DEFINED IN THE @FILE "RCC_Interface.h" FILE.
* -----------------------------------------------------------------------------------------------------------
*/
void RCC_DisableClock(u8 dest){
		
		switch(dest){
			case RCC_ENABLE_GPIOA :
					RCC_APB2ENR->IOPAEN = 0 ; 
				break;
			case RCC_ENABLE_GPIOB :
					RCC_APB2ENR->IOPBEN = 0; 
				break;
			case RCC_ENABLE_GPIOC :
					RCC_APB2ENR->IOPCEN = 0 ; 
				break;
			case RCC_ENABLE_ADC1 :
					RCC_APB2ENR->ADC1EN = 0 ; 
				break ; 
			case RCC_ENABLE_SPI1 :
					RCC_APB2ENR->SPI1EN = 0 ; 
				break ; 
			case RCC_ENABLE_TIMER10 :
					RCC_APB2ENR->TIM10EN = 0 ; 
				break ; 
			case RCC_ENABLE_UART1 :
					RCC_APB2ENR->USART1EN = 0; 
				break ; 
			default :
				
				break ; 
		}
		
}	


/**
* -----------------------------------------------------------------------------------------------------------
*	@FUNC				: void RCC_ClockOut(u8 mco_output).
*								This function is used to make an output clock on mco pin(PA8).
*
* @PARA[IN]		:	"mco_output". 
*								This parameter is used to choose the output clock source. 
*
*	@PARA[IN]		:	No thing.
*
*	@RETVAL			: Void.
*
* @NOTE 			: MAKE SURE THE SOURCE YOU WANT TO CLOCK IT OUT IS ALREADY DEFINED IN THE @FILE "RCC_Interface.h" FILE.
* -----------------------------------------------------------------------------------------------------------
*/
void RCC_ClockOut(u8 mco_output){
		if(mco_output < 12){
				RCC_CFGR->MCO = mco_output;	
		}else{
			
		}
}
