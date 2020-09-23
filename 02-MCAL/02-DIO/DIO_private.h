/*************************************************************
* Author 	: Shrouk Rashwan
* Date   	: 23 SEPTEMBER 2020
* VERSION	: V01
**************************************************************/
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

#define		GPOIA_BASE_ADDRESS		0x40010800
#define		GPOIB_BASE_ADDRESS		0x40010C00
#define		GPOIC_BASE_ADDRESS		0x40011100

			/*  REGEISTERS ADDRESSES FOR PORTA  */
#define 	GPIOA_CRL				*((u32*) (GPOIA_BASE_ADDRESS + 0x00))
#define 	GPIOA_CRH				*((u32*) (GPOIA_BASE_ADDRESS + 0x04))
#define 	GPIOA_IDR				*((u32*) (GPOIA_BASE_ADDRESS + 0x08))
#define 	GPIOA_ODR				*((u32*) (GPOIA_BASE_ADDRESS + 0x0C))
#define 	GPIOA_BSR				*((u32*) (GPOIA_BASE_ADDRESS + 0x10))
#define 	GPIOA_BRR				*((u32*) (GPOIA_BASE_ADDRESS + 0x14))
#define 	GPIOA_LCK				*((u32*) (GPOIA_BASE_ADDRESS + 0x18))

			/*  REGEISTERS ADDRESSES FOR PORTB  */
#define 	GPIOB_CRL				*((u32*) (GPOIB_BASE_ADDRESS + 0x00))
#define 	GPIOB_CRH				*((u32*) (GPOIB_BASE_ADDRESS + 0x04))
#define 	GPIOB_IDR				*((u32*) (GPOIB_BASE_ADDRESS + 0x08))
#define 	GPIOB_ODR				*((u32*) (GPOIB_BASE_ADDRESS + 0x0C))
#define 	GPIOB_BSR				*((u32*) (GPOIB_BASE_ADDRESS + 0x10))
#define 	GPIOB_BRR				*((u32*) (GPOIB_BASE_ADDRESS + 0x14))
#define 	GPIOB_LCK				*((u32*) (GPOIB_BASE_ADDRESS + 0x18))

			/*  REGEISTERS ADDRESSES FOR PORTC  */
#define 	GPIOC_CRL				*((u32*) (GPOIC_BASE_ADDRESS + 0x00))
#define 	GPIOC_CRH				*((u32*) (GPOIC_BASE_ADDRESS + 0x04))
#define 	GPIOC_IDR				*((u32*) (GPOIC_BASE_ADDRESS + 0x08))
#define 	GPIOC_ODR				*((u32*) (GPOIC_BASE_ADDRESS + 0x0C))
#define 	GPIOC_BSR				*((u32*) (GPOIC_BASE_ADDRESS + 0x10))
#define 	GPIOC_BRR				*((u32*) (GPOIC_BASE_ADDRESS + 0x14))
#define 	GPIOC_LCK				*((u32*) (GPOIC_BASE_ADDRESS + 0x18))



#endif