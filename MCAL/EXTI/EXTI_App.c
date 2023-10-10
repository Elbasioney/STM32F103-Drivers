#include "EXTI_Config.h"
#include "EXTI_Interface.h"
#include "EXTI_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


/* EXTI0 interrupt handler */ 
void EXTI0_IRQHandler(void);
/* EXTI1 interrupt handler */ 
void EXTI1_IRQHandler(void);
/* EXTI2 interrupt handler */ 
void EXTI2_IRQHandler(void);
/* EXTI3 interrupt handler */ 
void EXTI3_IRQHandler(void);
/* EXTI4 interrupt handler */ 
void EXTI4_IRQHandler(void);

/* call back functions */ 
static void (*CallBack_EXTI0)(void) = NULL ; 
static void (*CallBack_EXTI1)(void) = NULL ; 
static void (*CallBack_EXTI2)(void) = NULL ; 
static void (*CallBack_EXTI3)(void) = NULL ; 
static void (*CallBack_EXTI4)(void) = NULL ; 


void EXTI_EnableEXTI(u8 line){
		SET_BIT(EXTI->IMR , line);
}	


void EXTI_DisableEXTI(u8 line){
		CLR_BIT(EXTI->IMR , line);
}	


void EXTI_SoftwareTrigger(u8 line){
		SET_BIT(EXTI->SWIER , line);
}


void EXTI_ChangeLineMode(u8 line , u8 mode ){
		switch(mode){
			case EXTI_RISING_EDGE  :   SET_BIT(EXTI->RTSR , line);
																 CLR_BIT(EXTI->FTSR , line);	break;
			
			case EXTI_FALLING_EDGE :   SET_BIT(EXTI->FTSR , line);
																 CLR_BIT(EXTI->RTSR , line);	break;
			
			case EXTI_ON_CHANGE	   :   SET_BIT(EXTI->RTSR , line);
					                       SET_BIT(EXTI->FTSR , line);  break;
			
			default :   break;
		}
}	

void EXTI_SetCallBack(u8 line , void (*Copy_CallBack)(void)){
		if(Copy_CallBack == NULL){
			
		}else{
					switch(line){
						case LINE0 : CallBack_EXTI0 = Copy_CallBack ; break ; 
						case LINE1 : CallBack_EXTI1 = Copy_CallBack ; break ; 
						case LINE2 : CallBack_EXTI2 = Copy_CallBack ; break ; 
						case LINE3 : CallBack_EXTI3 = Copy_CallBack ; break ; 
						case LINE4 : CallBack_EXTI4 = Copy_CallBack ; break ; 
						default : break ;
					}	
					

		}
	
	
}	


/*   ISR Handlers   */

/*
void EXTI0_IRQHandler(void){
	if(CallBack_EXTI0){
			CallBack_EXTI0();
	}else{

	}		
	
	
}	

void EXTI1_IRQHandler(void){
	if(CallBack_EXTI1){
			CallBack_EXTI1();
	}else{

	}		
	
}	
*/
void EXTI2_IRQHandler(void){
	if(CallBack_EXTI2){
			CallBack_EXTI2();
	}else{

	}		
	
}	

void EXTI3_IRQHandler(void){
	if(CallBack_EXTI3){
			CallBack_EXTI3();
	}else{

	}		
	
}	
 
void EXTI4_IRQHandler(void){
	if(CallBack_EXTI4){
			CallBack_EXTI4();
	}else{

	}		
	
}

