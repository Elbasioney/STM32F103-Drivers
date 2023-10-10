
#include "AFIO_Config.h"
#include "AFIO_Interface.h"
#include "AFIO_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../GPIO/GPIO_Interface.h"


void AFIO_SetEXTIConfiguration(u8 line , u8 port){
		u8 Local_RegIndex = line / 4   ;
		u8 Local_SubRegIndex = line % 4   ;
		if(Local_RegIndex < 4){
			
			switch(Local_SubRegIndex){
				case 0 :
						AFIO->EXTICR[Local_RegIndex].EXTI0 = port ; 
					break ; 
				case 1 :
						AFIO->EXTICR[Local_RegIndex].EXTI1 = port ; 
					break ; 
				case 2 :
						AFIO->EXTICR[Local_RegIndex].EXTI2 = port ; 
					break ; 
				case 3 :
						AFIO->EXTICR[Local_RegIndex].EXTI3 = port ; 
					break ; 
				
				default :
					break ;
			}	
		}else{

		}		
		
			
	
}	

