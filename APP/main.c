#include "main.h"

int main(void){
	RCC_InitSysClock();
	RCC_EnableClock(RCC_ENABLE_GPIOA);
	GPIO_InitPinMode(GPIO_PORTA , GPIO_PIN0 , GPIO_OUTPUT_2MHZ_PP);
	while(1){
		GPIO_SetPin(GPIO_PORTA , GPIO_PIN0);
		
	}	
	
}	
