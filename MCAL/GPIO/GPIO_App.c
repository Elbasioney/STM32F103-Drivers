
#include "GPIO_Config.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


void GPIO_InitPinMode(u8 port , u8 pin , u8 mode ){
		
		if(mode == GPIO_INPUT_PULLUP){
				
				switch(port){
					case GPIO_PORTA :
							SET_BIT(PORTA_ODR_REG,pin);
							if(pin<8){
								PORTA_CRL_REG |= (u32)(5 << (4*pin));
								
							}else if(pin >= 8 && pin<15){
								PORTA_CRH_REG |= (u32)(5 << (4*(pin-8)));

							}else{

							}
						break ;
					case GPIO_PORTB :
							SET_BIT(PORTB_ODR_REG,pin);
						if(pin<8){
									PORTB_CRL_REG |= (u32)(5 << (4*pin));
									
								}else if(pin >= 8 && pin<15){
									PORTB_CRH_REG |= (u32)(5 << (4*(pin-8)));

								}else{

								}
						break ;
					case GPIO_PORTC :
							SET_BIT(PORTC_ODR_REG,pin);
						if(pin<8){
									PORTC_CRL_REG |= (u32)(5 << (4*pin));
									
								}else if(pin >= 8 && pin<15){
									PORTC_CRH_REG |= (u32)(5 << (4*(pin-8)));

								}else{

								}
						break ;
					default :
						break;
				}	
			
		}else if(mode == GPIO_INPUT_PULLDOWN){
				
				switch(port){
					case GPIO_PORTA :
							CLR_BIT(PORTA_ODR_REG,pin);
							if(pin<8){
								PORTA_CRL_REG |= (u32)(5 << (4*pin));
								
							}else if(pin >= 8 && pin<15){
								PORTA_CRH_REG |= (u32)(5 << (4*(pin-8)));

							}else{

							}
						break ;
					case GPIO_PORTB :
							CLR_BIT(PORTB_ODR_REG,pin);
						if(pin<8){
									PORTB_CRL_REG |= (u32)(5 << (4*pin));
									
								}else if(pin >= 8 && pin<15){
									PORTB_CRH_REG |= (u32)(5 << (4*(pin-8)));

								}else{

								}
						break ;
					case GPIO_PORTC :
							CLR_BIT(PORTC_ODR_REG,pin);
						if(pin<8){
									PORTC_CRL_REG |= (u32)(5 << (4*pin));
									
								}else if(pin >= 8 && pin<15){
									PORTC_CRH_REG |= (u32)(5 << (4*(pin-8)));

								}else{

								}
						break ;
					default :
						break;
				}	
		}else{
				switch(port){
			case GPIO_PORTA :
					switch(pin){
						case GPIO_PIN0 :
							PORTA_CRL->PIN0 = mode ; 
						break ; 
						case GPIO_PIN1 :
							PORTA_CRL->PIN1 = mode ; 
						break ; 
						case GPIO_PIN2 :
							PORTA_CRL->PIN2 = mode ; 
						break ; 
						case GPIO_PIN3 :
							PORTA_CRL->PIN3 = mode ; 
						break ;
						case GPIO_PIN4 :
							PORTA_CRL->PIN4 = mode ; 
						break ; 
						case GPIO_PIN5 :
							PORTA_CRL->PIN5 = mode ; 
						break ;
						case GPIO_PIN6 :
							PORTA_CRL->PIN6 = mode ; 
						break ; 
						case GPIO_PIN7 :
							PORTA_CRL->PIN7 = mode ; 
						break ;
						case GPIO_PIN8 :
							PORTA_CRH->PIN8 = mode ; 
						break ; 
						case GPIO_PIN9 :
							PORTA_CRH->PIN9 = mode ;  
						break ; 
						case GPIO_PIN10 :
							PORTA_CRH->PIN10 = mode ;  
						break ; 
						case GPIO_PIN11 :
							PORTA_CRH->PIN11 = mode ;  
						break ;
						case GPIO_PIN12 :
							PORTA_CRH->PIN12 = mode ; 
						break ; 
						case GPIO_PIN13 :
							PORTA_CRH->PIN13 = mode ; 
						break ;
						case GPIO_PIN14 :
							PORTA_CRH->PIN14 = mode ; 
						break ; 
						case GPIO_PIN15 :
							PORTA_CRH->PIN15 = mode ; 
						break ;
						default :
							
						break;
						
					}	
				break ; 
				case GPIO_PORTB : 
						switch(pin){
						case GPIO_PIN0 :
							PORTB_CRL->PIN0 = mode ; 
						break ; 
						case GPIO_PIN1 :
							PORTB_CRL->PIN1 = mode ; 
						break ; 
						case GPIO_PIN2 :
							PORTB_CRL->PIN2 = mode ; 
						break ; 
						case GPIO_PIN3 :
							PORTB_CRL->PIN3 = mode ; 
						break ;
						case GPIO_PIN4 :
							PORTB_CRL->PIN4 = mode ; 
						break ; 
						case GPIO_PIN5 :
							PORTB_CRL->PIN5 = mode ; 
						break ;
						case GPIO_PIN6 :
							PORTB_CRL->PIN6 = mode ; 
						break ; 
						case GPIO_PIN7 :
							PORTB_CRL->PIN7 = mode ; 
						break ;
						case GPIO_PIN8 :
							PORTB_CRH->PIN8 = mode ; 
						break ; 
						case GPIO_PIN9 :
							PORTB_CRH->PIN9 = mode ;  
						break ; 
						case GPIO_PIN10 :
							PORTB_CRH->PIN10 = mode ;  
						break ; 
						case GPIO_PIN11 :
							PORTB_CRH->PIN11 = mode ;  
						break ;
						case GPIO_PIN12 :
							PORTB_CRH->PIN12 = mode ; 
						break ; 
						case GPIO_PIN13 :
							PORTB_CRH->PIN13 = mode ; 
						break ;
						case GPIO_PIN14 :
							PORTB_CRH->PIN14 = mode ; 
						break ; 
						case GPIO_PIN15 :
							PORTB_CRH->PIN15 = mode ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
			case GPIO_PORTC : 
						switch(pin){
						case GPIO_PIN0 :
							PORTC_CRL->PIN0 = mode ; 
						break ; 
						case GPIO_PIN1 :
							PORTC_CRL->PIN1 = mode ; 
						break ; 
						case GPIO_PIN2 :
							PORTC_CRL->PIN2 = mode ; 
						break ; 
						case GPIO_PIN3 :
							PORTC_CRL->PIN3 = mode ; 
						break ;
						case GPIO_PIN4 :
							PORTC_CRL->PIN4 = mode ; 
						break ; 
						case GPIO_PIN5 :
							PORTC_CRL->PIN5 = mode ; 
						break ;
						case GPIO_PIN6 :
							PORTC_CRL->PIN6 = mode ; 
						break ; 
						case GPIO_PIN7 :
							PORTC_CRL->PIN7 = mode ; 
						break ;
						case GPIO_PIN8 :
							PORTC_CRH->PIN8 = mode ; 
						break ; 
						case GPIO_PIN9 :
							PORTC_CRH->PIN9 = mode ;  
						break ; 
						case GPIO_PIN10 :
							PORTC_CRH->PIN10 = mode ;  
						break ; 
						case GPIO_PIN11 :
							PORTC_CRH->PIN11 = mode ;  
						break ;
						case GPIO_PIN12 :
							PORTC_CRH->PIN12 = mode ; 
						break ; 
						case GPIO_PIN13 :
							PORTC_CRH->PIN13 = mode ; 
						break ;
						case GPIO_PIN14 :
							PORTC_CRH->PIN14 = mode ; 
						break ; 
						case GPIO_PIN15 :
							PORTC_CRH->PIN15 = mode ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
				default :
								
					break ; 
			
			
		}	
		}
}	

void GPIO_WritePinLogic(u8 port , u8 pin , u8 logic ){
		switch(port){
			case GPIO_PORTA :
					switch(pin){
						case GPIO_PIN0 :
							PORTA_ODR->PIN0 = logic ; 
						break ; 
						case GPIO_PIN1 :
							PORTA_ODR->PIN1 = logic ; 
						break ; 
						case GPIO_PIN2 :
							PORTA_ODR->PIN2 = logic ; 
						break ; 
						case GPIO_PIN3 :
							PORTA_ODR->PIN3 = logic ; 
						break ;
						case GPIO_PIN4 :
							PORTA_ODR->PIN4 = logic ; 
						break ; 
						case GPIO_PIN5 :
							PORTA_ODR->PIN5 = logic ; 
						break ;
						case GPIO_PIN6 :
							PORTA_ODR->PIN6 = logic ; 
						break ; 
						case GPIO_PIN7 :
							PORTA_ODR->PIN7 = logic ; 
						break ;
						case GPIO_PIN8 :
							PORTA_ODR->PIN8 = logic ; 
						break ; 
						case GPIO_PIN9 :
							PORTA_ODR->PIN9 = logic ;  
						break ; 
						case GPIO_PIN10 :
							PORTA_ODR->PIN10 = logic ;  
						break ; 
						case GPIO_PIN11 :
							PORTA_ODR->PIN11 = logic ;  
						break ;
						case GPIO_PIN12 :
							PORTA_ODR->PIN12 = logic ; 
						break ; 
						case GPIO_PIN13 :
							PORTA_ODR->PIN13 = logic ; 
						break ;
						case GPIO_PIN14 :
							PORTA_ODR->PIN14 = logic ; 
						break ; 
						case GPIO_PIN15 :
							PORTA_ODR->PIN15 = logic ; 
						break ;
						default :
							
						break;
						
					}	
				break ; 
				case GPIO_PORTB : 
						switch(pin){
						case GPIO_PIN0 :
							PORTB_ODR->PIN0 = logic ; 
						break ; 
						case GPIO_PIN1 :
							PORTB_ODR->PIN1 = logic ; 
						break ; 
						case GPIO_PIN2 :
							PORTB_ODR->PIN2 = logic ; 
						break ; 
						case GPIO_PIN3 :
							PORTB_ODR->PIN3 = logic ; 
						break ;
						case GPIO_PIN4 :
							PORTB_ODR->PIN4 = logic ; 
						break ; 
						case GPIO_PIN5 :
							PORTB_ODR->PIN5 = logic ; 
						break ;
						case GPIO_PIN6 :
							PORTB_ODR->PIN6 = logic ; 
						break ; 
						case GPIO_PIN7 :
							PORTB_ODR->PIN7 = logic ; 
						break ;
						case GPIO_PIN8 :
							PORTB_ODR->PIN8 = logic ; 
						break ; 
						case GPIO_PIN9 :
							PORTB_ODR->PIN9 = logic ;  
						break ; 
						case GPIO_PIN10 :
							PORTB_ODR->PIN10 = logic ;  
						break ; 
						case GPIO_PIN11 :
							PORTB_ODR->PIN11 = logic ;  
						break ;
						case GPIO_PIN12 :
							PORTB_ODR->PIN12 = logic ; 
						break ; 
						case GPIO_PIN13 :
							PORTB_ODR->PIN13 = logic ; 
						break ;
						case GPIO_PIN14 :
							PORTB_ODR->PIN14 = logic ; 
						break ; 
						case GPIO_PIN15 :
							PORTB_ODR->PIN15 = logic ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
			case GPIO_PORTC : 
						switch(pin){
						case GPIO_PIN0 :
							PORTC_ODR->PIN0 = logic ; 
						break ; 
						case GPIO_PIN1 :
							PORTC_ODR->PIN1 = logic ; 
						break ; 
						case GPIO_PIN2 :
							PORTC_ODR->PIN2 = logic ; 
						break ; 
						case GPIO_PIN3 :
							PORTC_ODR->PIN3 = logic ; 
						break ;
						case GPIO_PIN4 :
							PORTC_ODR->PIN4 = logic ; 
						break ; 
						case GPIO_PIN5 :
							PORTC_ODR->PIN5 = logic ; 
						break ;
						case GPIO_PIN6 :
							PORTC_ODR->PIN6 = logic ; 
						break ; 
						case GPIO_PIN7 :
							PORTC_ODR->PIN7 = logic ; 
						break ;
						case GPIO_PIN8 :
							PORTC_ODR->PIN8 = logic ; 
						break ; 
						case GPIO_PIN9 :
							PORTC_ODR->PIN9 = logic ;  
						break ; 
						case GPIO_PIN10 :
							PORTC_ODR->PIN10 = logic ;  
						break ; 
						case GPIO_PIN11 :
							PORTC_ODR->PIN11 = logic ;  
						break ;
						case GPIO_PIN12 :
							PORTC_ODR->PIN12 = logic ; 
						break ; 
						case GPIO_PIN13 :
							PORTC_ODR->PIN13 = logic ; 
						break ;
						case GPIO_PIN14 :
							PORTC_ODR->PIN14 = logic ; 
						break ; 
						case GPIO_PIN15 :
							PORTC_ODR->PIN15 = logic ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
				default :
								
					break ; 
			
			
		}	
}		


u8   GPIO_ReadPinLogic(u8 port , u8 pin ){
	u8 Local_ret_val = 0 ; 
	switch(port){
			case GPIO_PORTA :
					switch(pin){
						case GPIO_PIN0 :
							Local_ret_val =  PORTA_IDR->PIN0 ;
						break ; 
						case GPIO_PIN1 :
							Local_ret_val =  PORTA_IDR->PIN1 ;
						break ; 
						case GPIO_PIN2 :
							Local_ret_val =  PORTA_IDR->PIN2 ; 
						break ; 
						case GPIO_PIN3 :
							Local_ret_val =  PORTA_IDR->PIN3 ; 
						break ;
						case GPIO_PIN4 :
							Local_ret_val =  PORTA_IDR->PIN4 ; 
						break ; 
						case GPIO_PIN5 :
							Local_ret_val =  PORTA_IDR->PIN5 ;
						break ;
						case GPIO_PIN6 :
							Local_ret_val =  PORTA_IDR->PIN6 ; 
						break ; 
						case GPIO_PIN7 :
							Local_ret_val =  PORTA_IDR->PIN7 ; 
						break ;
						case GPIO_PIN8 :
							Local_ret_val =  PORTA_IDR->PIN8 ;
						break ; 
						case GPIO_PIN9 :
							Local_ret_val =  PORTA_IDR->PIN9 ;  
						break ; 
						case GPIO_PIN10 :
							Local_ret_val =  PORTA_IDR->PIN10 ; 
						break ; 
						case GPIO_PIN11 :
							Local_ret_val =  PORTA_IDR->PIN11 ;
						break ;
						case GPIO_PIN12 :
							Local_ret_val =  PORTA_IDR->PIN12 ;
						break ; 
						case GPIO_PIN13 :
							Local_ret_val =  PORTA_IDR->PIN13 ; 
						break ;
						case GPIO_PIN14 :
							Local_ret_val =  PORTA_IDR->PIN14 ;
						break ; 
						case GPIO_PIN15 :
							Local_ret_val =  PORTA_IDR->PIN15 ; 
						break ;
						default :
							
						break;
						
					}	
				break ; 
				case GPIO_PORTB : 
						switch(pin){
						case GPIO_PIN0 :
							Local_ret_val =  PORTB_IDR->PIN0 ;
						break ; 
						case GPIO_PIN1 :
							Local_ret_val =  PORTB_IDR->PIN1 ;
						break ; 
						case GPIO_PIN2 :
							Local_ret_val =  PORTB_IDR->PIN2 ; 
						break ; 
						case GPIO_PIN3 :
							Local_ret_val =  PORTB_IDR->PIN3 ; 
						break ;
						case GPIO_PIN4 :
							Local_ret_val =  PORTB_IDR->PIN4 ; 
						break ; 
						case GPIO_PIN5 :
							Local_ret_val =  PORTB_IDR->PIN5 ;
						break ;
						case GPIO_PIN6 :
							Local_ret_val =  PORTB_IDR->PIN6 ; 
						break ; 
						case GPIO_PIN7 :
							Local_ret_val =  PORTB_IDR->PIN7 ; 
						break ;
						case GPIO_PIN8 :
							Local_ret_val =  PORTB_IDR->PIN8 ;
						break ; 
						case GPIO_PIN9 :
							Local_ret_val =  PORTB_IDR->PIN9 ;  
						break ; 
						case GPIO_PIN10 :
							Local_ret_val =  PORTB_IDR->PIN10 ; 
						break ; 
						case GPIO_PIN11 :
							Local_ret_val =  PORTB_IDR->PIN11 ;
						break ;
						case GPIO_PIN12 :
							Local_ret_val =  PORTB_IDR->PIN12 ;
						break ; 
						case GPIO_PIN13 :
							Local_ret_val =  PORTB_IDR->PIN13 ; 
						break ;
						case GPIO_PIN14 :
							Local_ret_val =  PORTB_IDR->PIN14 ;
						break ; 
						case GPIO_PIN15 :
							Local_ret_val =  PORTB_IDR->PIN15 ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
			case GPIO_PORTC : 
						switch(pin){
						case GPIO_PIN0 :
							Local_ret_val =  PORTC_IDR->PIN0 ;
						break ; 
						case GPIO_PIN1 :
							Local_ret_val =  PORTC_IDR->PIN1 ;
						break ; 
						case GPIO_PIN2 :
							Local_ret_val =  PORTC_IDR->PIN2 ; 
						break ; 
						case GPIO_PIN3 :
							Local_ret_val =  PORTC_IDR->PIN3 ; 
						break ;
						case GPIO_PIN4 :
							Local_ret_val =  PORTC_IDR->PIN4 ; 
						break ; 
						case GPIO_PIN5 :
							Local_ret_val =  PORTC_IDR->PIN5 ;
						break ;
						case GPIO_PIN6 :
							Local_ret_val =  PORTC_IDR->PIN6 ; 
						break ; 
						case GPIO_PIN7 :
							Local_ret_val =  PORTC_IDR->PIN7 ; 
						break ;
						case GPIO_PIN8 :
							Local_ret_val =  PORTC_IDR->PIN8 ;
						break ; 
						case GPIO_PIN9 :
							Local_ret_val =  PORTC_IDR->PIN9 ;  
						break ; 
						case GPIO_PIN10 :
							Local_ret_val =  PORTC_IDR->PIN10 ; 
						break ; 
						case GPIO_PIN11 :
							Local_ret_val =  PORTC_IDR->PIN11 ;
						break ;
						case GPIO_PIN12 :
							Local_ret_val =  PORTC_IDR->PIN12 ;
						break ; 
						case GPIO_PIN13 :
							Local_ret_val =  PORTC_IDR->PIN13 ; 
						break ;
						case GPIO_PIN14 :
							Local_ret_val =  PORTC_IDR->PIN14 ;
						break ; 
						case GPIO_PIN15 :
							Local_ret_val =  PORTC_IDR->PIN15 ; 
						break ;
						default :
							
						break;
						
					}	
						
					break ; 
				default :
								
					break ; 
			
			
		}	
		return Local_ret_val ; 
}	

void GPIO_SetPin(u8 port , u8 pin){
	
	switch(port){
		case GPIO_PORTA :
				PORTA_BSSR_REG = (1<<pin);
			break ; 
		case GPIO_PORTB :
				PORTA_BSSR_REG = (1<<pin);
			break ;		
		case GPIO_PORTC :
				PORTA_BSSR_REG = (1<<pin);
			break ;
		default :
			break ;
		
	}	
	
	
	
}	

void GPIO_ClearPin(u8 port , u8 pin){
	
	switch(port){
		case GPIO_PORTA :
				PORTA_BSSR_REG = (1<<(pin+16));
			break ; 
		case GPIO_PORTB :
				PORTA_BSSR_REG = (1<<(pin+16));
			break ;		
		case GPIO_PORTC :
				PORTA_BSSR_REG = (1<<(pin+16));
			break ;
		default :
			break ;
		
	}	
	
	
	
}	

