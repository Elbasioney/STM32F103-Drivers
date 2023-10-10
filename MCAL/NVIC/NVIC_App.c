

#include "NVIC_Config.h"
#include "NVIC_Interface.h"
#include "NVIC_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


void NVIC_Init(void){
	
	SCB_AIRCR = NVIC_SCB_GROUP_CFG ; 
	
	
}	

void NVIC_EnableInterrupt(u8 interrupt){
	
		if(interrupt < 32){
				NVIC_ISER0 = ( 1 << interrupt );
		}else if(interrupt <= 59){
			
				NVIC_ISER1 = ( 1 << (interrupt-32) );
			
		}else{

			
		}
	
}	

void NVIC_DisableInterrupt(u8 interrupt){
	
		if(interrupt < 32){
				NVIC_ICER0 = ( 1 << interrupt );
		}else if(interrupt <= 59){
			
				NVIC_ICER1 = ( 1 << (interrupt-32) );
			
		}else{

			
		}
	
}	

void NVIC_SetPendingFlag(u8 interrupt){
	
		if(interrupt < 32){
				NVIC_ISPR0 = ( 1 << interrupt );
		}else if(interrupt <= 59){
			
				NVIC_ISPR1 = ( 1 << (interrupt-32) );
			
		}else{

			
		}
	
}	


void NVIC_ClearPendingFlag(u8 interrupt){
	
		if(interrupt < 32){
				NVIC_ICPR0 = ( 1 << interrupt );
		}else if(interrupt <= 59){
			
				NVIC_ICPR1 = ( 1 << (interrupt-32) );
			
		}else{

			
		}
	
}	



u8 NVIC_ReadActiveFlagStatus(u8 interrupt){
		u8 Local_Res = 0 ; 
		if(interrupt < 32){
				Local_Res = GET_BIT(NVIC_IABR0 , interrupt);
		}else if(interrupt <= 59){
			
				Local_Res = GET_BIT(NVIC_IABR0 , (interrupt-32));
			
		}else{

			
		}
		return Local_Res ; 
}	

void NVIC_SetPriority( u8 peripheral_index , u8 group_priority , u8 sub_group_priority){
		
		#if NVIC_SCB_GROUP_CFG == NVIC_2GROUP_2SUBGROUP 
				NVIC_IPR[peripheral_index] =  (u8)((group_priority << 6)|(sub_group_priority << 4)) ;
		#else
			#error ("Incompleted function implimentaion!!")
		#endif
}	
	

