/**
 * @file std_macros.h
 * @author Esraa
 * @brief header file to define some standard macros 
 * @version 0.1
 * @date 11 Septemper 2022
 * 
 * @copyright 
 * 
 */


#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#include "Data_Types.h"
#include "REGISTERS_DEF.h"


/*****************
*Bit Manipulation*
******************/

#define SETBIT(REG,BIT)			(REG |=1<<BIT)			//TO MAKE THIS BIT = 1

#define READBIT(REG,BIT)	    ((REG>>BIT) & 1)		//TO READ THIS BIT AND GET ITS VALUE

#define CLRBIT(REG,BIT)			(REG &= ~(1<<BIT))		//TO MAKE THIS BIT = 0

#define TOGBIT(REG,BIT)			(REG ^= 1 << BIT)		//TO TOGGLE THIS BIT


/**********
*STD Types*
***********/

#define MSB_FIRST             0u    /* big endian bit ordering */
#define LSB_FIRST        	  1u    /* little endian bit ordering */

#define HIGH_BYTE_FIRST  	  0u    /* big endian byte ordering */
#define LOW_BYTE_FIRST		  1u    /* little endian byte ordering */

#ifndef TRUE
   #define TRUE   		      1u
#endif

#ifndef FALSE
   #define FALSE  			  0u
#endif


/*****************
 *End of the file*
 *****************/
#endif 