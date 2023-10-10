

#ifndef _RCC_CONFIG_H_ 
#define _RCC_CONFIG_H_


/******************** SELECT RCC INPUT CLOCK ***************************/
#define RCC_HSE_CRYSTAL   0
#define RCC_HSE_RC        1 
#define RCC_HSI           2 
#define RCC_PLL           3
/*
*  Options : RCC_HSE_CRYSTAL
*            RCC_HSE_RC
*            RCC_HSI
*            RCC_PLL
*/
#define RCC_CLOCK_TYPE   RCC_HSE_CRYSTAL
/**********************************************************************/


/******************** SELECT AHB PRESCALER  ***************************/
#define RCC_AHB_PRESCALER_NO_DIV       0
#define RCC_AHB_PRESCALER_DIV_BY_2     8 
#define RCC_AHB_PRESCALER_DIV_BY_4     9
#define RCC_AHB_PRESCALER_DIV_BY_8     10
#define RCC_AHB_PRESCALER_DIV_BY_16    11 
#define RCC_AHB_PRESCALER_DIV_BY_64    12
#define RCC_AHB_PRESCALER_DIV_BY_128   13
#define RCC_AHB_PRESCALER_DIV_BY_256   14
#define RCC_AHB_PRESCALER_DIV_BY_512   15
/*
*  Options : 1 --> 512 
*/
#define RCC_AHB_PRESCALER_SET   RCC_AHB_PRESCALER_NO_DIV
/**********************************************************************/


/******************** SELECT APB1 PRESCALER  **************************/
#define RCC_APB1_PRESCALER_NO_DIV       0
#define RCC_APB1_PRESCALER_DIV_BY_2     4 
#define RCC_APB1_PRESCALER_DIV_BY_4     5
#define RCC_APB1_PRESCALER_DIV_BY_8     6
#define RCC_APB1_PRESCALER_DIV_BY_16    7 
/*
*  Options : 1 --> 16 
*/

#define RCC_APB1_PRESCALER_SET   RCC_APB1_PRESCALER_NO_DIV

/**********************************************************************/


/******************** SELECT APB2 PRESCALER  **************************/
#define RCC_APB2_PRESCALER_NO_DIV       0
#define RCC_APB2_PRESCALER_DIV_BY_2     4 
#define RCC_APB2_PRESCALER_DIV_BY_4     5
#define RCC_APB2_PRESCALER_DIV_BY_8     6
#define RCC_APB2_PRESCALER_DIV_BY_16    7 
/*
*  Options : 1 --> 16 
*/
#define RCC_APB2_PRESCALER_SET   RCC_APB2_PRESCALER_NO_DIV
/**********************************************************************/


/******************** SELECT ADC PRESCALER  ***************************/
#define RCC_ADC_PRESCALER_DIV_BY_2     0
#define RCC_ADC_PRESCALER_DIV_BY_4     1 
#define RCC_ADC_PRESCALER_DIV_BY_6     2
#define RCC_ADC_PRESCALER_DIV_BY_8     3
/*
*  Options : 2 --> 8 
*/
#define RCC_ADC_PRESCALER_SET   RCC_ADC_PRESCALER_DIV_BY_8
/**********************************************************************/




#if RCC_CLOCK_TYPE == RCC_PLL 

/****************** SELECT HSE DIVIDER FOR PLL ***********************/
#define RCC_PLL_HSE_NO_DIV    0 
#define RCC_PLL_HSE_DIV_BY_2  1
/* 
*  Options : RCC_PLL_HSE_DIV_BY_2
*					   RCC_PLL_HSE_NO_DIV
*/
#define RCC_PLL_HSE_SET RCC_PLL_HSE_NO_DIV
/**********************************************************************/


/*********************** SELECT PLL SOURCE ****************************/
#define RCC_PLL_SOURCE_HSI_DIV_BY_2    0 
#define RCC_PLL_SOURCE_HSE             1
/* 
*  Options : RCC_PLL_SOURCE_HSI_DIV_BY_2
*					   RCC_PLL_SOURCE_HSE
*/
#define RCC_PLL_SOURCE RCC_PLL_SOURCE_HSE
/**********************************************************************/


/************** SELECT PLL MULTIPLICATION FACTOR **********************/
#define RCC_PLL_MUL_BY_2     0
#define RCC_PLL_MUL_BY_3     1 
#define RCC_PLL_MUL_BY_4     2 
#define RCC_PLL_MUL_BY_5     3 
#define RCC_PLL_MUL_BY_6     4 
#define RCC_PLL_MUL_BY_7     5  
#define RCC_PLL_MUL_BY_8     6 
#define RCC_PLL_MUL_BY_9     7 
#define RCC_PLL_MUL_BY_10    8 
#define RCC_PLL_MUL_BY_11    9 
#define RCC_PLL_MUL_BY_12    10 
#define RCC_PLL_MUL_BY_13    11  
#define RCC_PLL_MUL_BY_14    12 
#define RCC_PLL_MUL_BY_15    13 
#define RCC_PLL_MUL_BY_16    14 

/* 
*  Options : Select from above 
*/
#define RCC_PLL_MUL_FACTOR RCC_PLL_MUL_BY_2
/**********************************************************************/

#endif 




#endif 

