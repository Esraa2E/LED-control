/**
 * @file NVIC.h
 * @brief header file for NVIC driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
#ifndef NVIC_H_
#define  NVIC_H_
#include "std_macros.h"


/**********************
 *Groups and subgroups*
 **********************/
#define ggg 0x400
#define ggs 0x500
#define gss 0x600
#define sss 0x700

uint32 VECT[154];
uint32 GP[154];
uint32 SP[154];
#define PG ggg
#define NO_INTERRUPT  2 


 /*****************************************************************************
* Function Name: NVIC_init
* Purpose      : to initialize NVIC
* Parameters   : void
* Return value : void
*****************************************************************************/
void NVIC_handler(void);


/*****************
 *End of the file*
 *****************/
 #endif
	