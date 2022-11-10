/**
 * @file GPIO.h
 * @brief header file for LED driver 
 * @version 0.1
 * @date 19 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
 #include "LED.h"
 
 void LED_init(void)
 {
		GPIO_init();
	  Make_INPUT(GPIODIR_PORTF,4);
	  Make_INPUT(GPIODIR_PORTF,0);	 
	  SETBIT(GPIOPUR_PORTF,4);
	  SETBIT(GPIOPUR_PORTF,0);
	  Make_OUTPUT(GPIODIR_PORTF,2);
	  Enable_PIN(GPIODEN_PORTF,2);
	  Enable_PIN(GPIODEN_PORTF,4);
	  Enable_PIN(GPIODEN_PORTF,0);
	 
 }
 
 void LED_Blink(void)
 {
	 systimer_init(second);
	 PIN_INT(4,0);
 }