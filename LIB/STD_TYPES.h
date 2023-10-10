/*
* Author  : Ahmed Elbasioney
* Date    : 24 Jule 2023
* Version : V-01
*
*
*/
#ifndef STD_TYPES_H_INCLUDED
#define STD_TYPES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef enum{
	RCC_WrongClkCfg = 0 ,    /* Returned when wrong RCC configurations are occured */ 
	RCC_TimeOut ,            /* Returned when RCC clock selection time out  */ 
	RCC_UndefinedPeripheral  /* Returned when trying to enable or disable undefined peripheral */ 
}ErrorTypes_t;	


typedef unsigned char        u8  ;
typedef unsigned short int   u16 ;
typedef unsigned long int    u32 ;
/*typedef unsigned long long   u64 ;*/

typedef signed char        s8  ;
typedef signed short int   s16 ;
typedef signed long int    s32 ;
/*typedef signed long long   s64 ;*/

typedef float       f32 ;
typedef double      f64 ;
typedef long double s80 ;



#endif /* STD_TYPES_H_INCLUDED */


