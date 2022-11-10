/**
 * @file GPIO.h
 * @brief  gpio driver FOR PORTA
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
 
 #include "GPIO.h"
 
 // Initialization for PORTA 
 void GPIO_init()
 {
    SETBIT(RCGCGPIO,F);	 //SET clock for portF
	 
 }
 
 
 
 /*****************
 *End of the file*
 *****************/