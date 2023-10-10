

#include "../../LIB/STD_TYPES.h"




/************* MACROS TO ENABLE PERIPHERAL CLOCK  *******************/
#define RCC_ENABLE_GPIOA    0 
#define RCC_ENABLE_GPIOB    1 
#define RCC_ENABLE_GPIOC    2 
#define RCC_ENABLE_ADC1     3 
#define RCC_ENABLE_TIMER10  4
#define RCC_ENABLE_SPI1     5
#define RCC_ENABLE_UART1    6
/**  @NOTE: Still not completed yet */
/**********************************************************************/

/************** MACROS TO CONFIGURE MCO OUTPUT CLOCK  *****************/
#define RCC_MCO_NO_OUTPUT_CLOCK              0
#define RCC_MCO_SYSCLK_OUTPUT_CLOCK          4 
#define RCC_MCO_HSI_OUTPUT_CLOCK             5
#define RCC_MCO_HSE_OUTPUT_CLOCK             6
#define RCC_MCO_PLL_DIV_BY_2_OUTPUT_CLOCK    7
/**********************************************************************/



void RCC_InitSysClock(void);
void RCC_EnableClock(u8 dest);
void RCC_DisableClock(u8 dest);

void RCC_ClockOut(u8 mco_output);
