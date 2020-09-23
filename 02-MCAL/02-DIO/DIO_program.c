/*************************************************************
* Author 	: Shrouk Rashwan
* Date   	: 23 SEPTEMBER 2020
* VERSION	: V01
**************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"

void MGPIO_voidSetPinDirection(u8 copy_u8PORT , u8 copy_u8PIN, u8 copy_u8MODE)
{
	switch(copy_u8PORT)
	{
		case GPIOA:
				if(copy_u8PIN <= 7)
				{
					GPIOA_CRL &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOA_CRL |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
				else if(copy_u8PIN <= 15)
				{
					copy_u8PIN = copy_u8PIN -8;
					GPIOA_CRH &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOA_CRH |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
		break;
		case GPIOB:
				if(copy_u8PIN <= 7)
				{
					GPIOB_CRL &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOB_CRL |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
				else if(copy_u8PIN <= 15)
				{
					copy_u8PIN = copy_u8PIN -8;
					GPIOB_CRH &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOB_CRH |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
		break;
		case GPIOC:
				if(copy_u8PIN <= 7)
				{
					GPIOC_CRL &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOC_CRL |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
				else if(copy_u8PIN <= 15)
				{
					copy_u8PIN = copy_u8PIN -8;
					GPIOC_CRH &= ~ ((0b1111) << (copy_u8PIN*4))
					GPIOC_CRH |= ((copy_u8MODE) << (copy_u8PIN*4))
				}
		break;
	}
}

void MGPIO_voidSetPinValue(u8 copy_u8PORT , u8 copy_u8PIN, u8 copy_u8VALUE)
{
	switch(copy_u8PORT)
	{
	case GPIOA:
			if(copy_u8VALUE == GPIO_HIGH)
			{
				SET_BIT(GPIOA_ODR, copy_u8PIN)
			}
			else if(copy_u8VALUE == GPIO_LOW)
			{
				CLR_BIT(GPIOA_ODR, copy_u8PIN)
			}			

		break;
	case GPIOB:
			if(copy_u8VALUE == GPIO_HIGH)
			{
				SET_BIT(GPIOB_ODR, copy_u8PIN)
			}
			else if(copy_u8VALUE == GPIO_LOW)
			{
				CLR_BIT(GPIOB_ODR, copy_u8PIN)
			}	
		break;
	case GPIOC:
			if(copy_u8VALUE == GPIO_HIGH)
			{
				SET_BIT(GPIOC_ODR, copy_u8PIN)
			}
			else if(copy_u8VALUE == GPIO_LOW)
			{
				CLR_BIT(GPIOC_ODR, copy_u8PIN)
			}	
		break;
	}
}	

u8 MGPIO_u8GetPinDirection(u8 copy_u8PORT , u8 copy_u8PIN)
{
	LOC_u8Result = 0;
	switch(copy_u8PORT)
	{
	case GPIOA:
			LOC_u8Result = GET_BIT(GPIOA_IDR, copy_u8PIN)	
		break;
	case GPIOB:
			LOC_u8Result = GET_BIT(GPIOB_IDR, copy_u8PIN)		
		break;
	case GPIOC:
		LOC_u8Result = GET_BIT(GPIOC_IDR, copy_u8PIN)		
		break;
	}
	
	return LOC_u8Result;
}
