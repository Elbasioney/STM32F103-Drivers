#include "SYSTICK_Config.h"
#include "SYSTICK_Interface.h"
#include "SYSTICK_Private.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"


/* Systick timer interrupt handler */
void SysTick_Handler(void);
/* Call back function */ 
static void (*Call_back)(void)= NULL ;    
/* Variable used to Check if systick timer interrupt is single time or periodic */ 
static volatile u8 ISR_Mode = ISR_IDLE ;  
/* Variable used to clear systick timer interrupt flag */ 
static volatile u32 flag_sweep = 0  ;     


void SYSTICK_Init(void){	
		STK_CTRL->SOURCE = SYSTICK_SOURCE_SET ;
		STK_VAL = 0 ;	
}	
	
void SYSTICK_Enable(void){
	
	STK_CTRL->ENABLE = 1  ;
	
}	

void SYSTICK_Disable(void){
	STK_CTRL->ENABLE = 0  ;
	STK_CTRL->INTERRUPT = 0 ;
}	


void SYSTICK_Delay(u32 Ticks){
		STK_VAL = 0 ;
		STK_LOAD = Ticks ; 
		STK_CTRL->ENABLE = 1  ;
		while(STK_CTRL->FLAG == 0 );
}	

u32 SYSTICK_ReadRemainingTicks(void){
	
	
		return STK_VAL ; 
	
}	

u32 SYSTICK_ReadElapsedTicks(void){
	
	
		return (STK_LOAD-STK_VAL) ;
}	


void SYSTICK_SingleAsync(u32 Ticks, void (*Copy_CallBack)(void)){
		if(NULL == Copy_CallBack){
			
			
		}else{
				SYSTICK_Disable();
				STK_VAL = 0  ;
				ISR_Mode = ISR_SINGLE ; 
				Call_back = Copy_CallBack ; 
				STK_LOAD = Ticks;
				STK_CTRL->INTERRUPT = 1 ;
				SYSTICK_Enable();
		}
}	
void SYSTICK_PeriodicAsync(u32 Ticks, void (*Copy_CallBack)(void)){
		if(NULL == Copy_CallBack){
			
			
		}else{
				STK_VAL = 0  ;
				ISR_Mode = ISR_PERIODIC ; 
				Call_back = Copy_CallBack ; 
				STK_LOAD = Ticks;
				STK_CTRL->INTERRUPT = 1 ;
				SYSTICK_Enable();
		}
}	


/********** ISR HANDLER *********/
void SysTick_Handler(void){
		flag_sweep = STK_LOAD ;   /* Clear interrupt flag by reading load register value */ 
		if(Call_back){
			if(ISR_Mode == ISR_SINGLE){
				Call_back();
				Call_back = NULL ;   
				SYSTICK_Disable();
			}else if(ISR_Mode == ISR_PERIODIC){
				Call_back();
			}else{

			}				
			
			
		}else{

		}
		
}
