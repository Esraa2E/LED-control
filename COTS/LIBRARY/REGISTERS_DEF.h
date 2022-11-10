/**
 * @file REGISTERS_DEF.h
 * @brief header file to define the addresses of the used registers
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
#ifndef REGISTERS_DEF_H_
#define REGISTERS_DEF_H_
#include "Data_Types.h"

  /*************
   * GPIO  REG * 
   *************/
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define RCGCGPIO           				       (*((volatile uint32 *)0x400FE608))
#define SCGCGPIO    				             (*((volatile uint32 *)0x400FE708))
#define DCGCGPIO  				               (*((volatile uint32 *)0x400FE808))
  /*************
   * GPIOA REG * 
   *************/
#define GPIODIR_PORTA                    (*((volatile uint32 *)0x40004400))
#define GPIODR2R_PORTA                   (*((volatile uint32 *)0x40004500))
#define GPIODR4R_PORTA                   (*((volatile uint32 *)0x40004504))
#define GPIODR8R_PORTA                   (*((volatile uint32 *)0x40004508))
#define GPIOPUR_PORTA                    (*((volatile uint32 *)0x40004510))
#define GPIODEN_PORTA                    (*((volatile uint32 *)0x4000451C))		
#define GPIOLOCK_PORTA                   (*((volatile uint32 *)0x40004520))        		//0x4C4F.434B
#define GPIODATA_PORTA                   (*((volatile uint32 *)0x400043FC))
#define GPIOIS_PORTA                     (*((volatile uint32 *)0x40004404))
#define GPIOICR_PORTA                    (*((volatile uint32 *)0x4000441C))
#define GPIOIBE_PORTA                    (*((volatile uint32 *)0x40004408))
#define GPIOIEV_PORTA                    (*((volatile uint32 *)0x4000440C))
#define GPIOIM_PORTA                     (*((volatile uint32 *)0x40004410))
	
  /*************
   * GPIOF REG * 
   *************/
#define GPIODATA_PORTF       (*((volatile uint32 *)0x400253FC))
#define GPIODIR_PORTF        (*((volatile uint32 *)0x40025400))
#define GPIOIS_PORTF         (*((volatile uint32 *)0x40025404))
#define GPIOIBE_PORTF        (*((volatile uint32 *)0x40025408))
#define GPIOIEV_PORTF        (*((volatile uint32 *)0x4002540C))
#define GPIOIM_PORTF         (*((volatile uint32 *)0x40025410))
#define GPIODR2R_PORTF       (*((volatile uint32 *)0x40025500))
#define GPIODR4R_PORTF       (*((volatile uint32 *)0x40025504))
#define GPIODR8R_PORTF       (*((volatile uint32 *)0x40025508))
#define GPIOPUR_PORTF        (*((volatile uint32 *)0x40025510))
#define GPIODEN_PORTF        (*((volatile uint32 *)0x4002551C))
#define GPIOLOCK_PORTF       (*((volatile uint32 *)0x40025520))
#define GPIOCR_PORTF         (*((volatile uint32 *)0x40025524))
#define GPIOICR_PORTF        (*((volatile uint32 *)0x4002541C))



  /**************                        
   * TIMER0 REG *                        
   **************/	 
#define RCGCTIMER                        (*((volatile uint32 *)0x400FEA04))
#define GPTMCFG0                         (*((volatile uint32 *)0x40030000))
#define GPTMTAMR0                        (*((volatile uint32 *)0x40030004))
#define GPTMTBMR0                        (*((volatile uint32 *)0x40030008))
#define GPTMCTL0                         (*((volatile uint32 *)0x4003000C))
#define GPTMSYNC0                        (*((volatile uint32 *)0x40030010))
#define GPTMIMR0                         (*((volatile uint32 *)0x40030018))
#define GPTMRIS0                         (*((volatile uint32 *)0x4003001C))
#define GPTMMIS0                         (*((volatile uint32 *)0x40030020))
#define GPTMICR                          (*((volatile uint32 *)0x40030024))
#define GPTMTAILR0                       (*((volatile uint32 *)0x40030028))
#define GPTMTBILR0                       (*((volatile uint32 *)0x4003002C))
#define GPTMTAMATCHR0                    (*((volatile uint32 *)0x40030030))
#define GPTMTBMATCHR0                    (*((volatile uint32 *)0x40030034))
#define GPTMTAPR0                        (*((volatile uint32 *)0x40030038))
#define GPTMTBPR0                        (*((volatile uint32 *)0x4003003C))
#define GPTMTAPMR0                       (*((volatile uint32 *)0x40030040))
#define GPTMTBPMR0                       (*((volatile uint32 *)0x40030044))
#define GPTMTAR0                         (*((volatile uint32 *)0x40030048))
#define GPTMTBR0                         (*((volatile uint32 *)0x4003004C))
#define GPTMTAV0                         (*((volatile uint32 *)0x40030050))
#define GPTMTBV0                         (*((volatile uint32 *)0x40030054))
#define GPTMRTCPD0                       (*((volatile uint32 *)0x40030058))
#define GPTMTAPS0                        (*((volatile uint32 *)0x4003005C))
#define GPTMTBPS0                        (*((volatile uint32 *)0x40030060))
#define GPTMTAPV0                        (*((volatile uint32 *)0x40030064))
#define GPTMTBPV                         (*((volatile uint32 *)0x40030068))
#define GPTMPP0                          (*((volatile uint32 *)0x40030FC0))
	
	/********                        
   * NVIC *                        
   ********/
#define NVIC_ACTLR                       (*((volatile uint32 *)0xE000E008))	
#define NVIC_ST_CTRL                     (*((volatile uint32 *)0xE000E010))		
#define NVIC_INT_CTRL                    (*((volatile uint32 *)0xE000ED04))
#define NVIC_APINT                       (*((volatile uint32 *)0xE000ED0C))
#define NVIC_SYS_CTRL                    (*((volatile uint32 *)0xE000ED10))
#define NVIC_ST_RELOAD_R                 (*((volatile uint32 *)0xE000E014))
#define NVIC_ST_CURRENT_R                (*((volatile uint32 *)0xE000E018))	

#define NVIC_ENn(n)                      *((volatile uint32*)(0xE000E100+ (0x4*n)))
#define NVIC_DISn(n)                     *((volatile uint32*)(0xE000E180+ (0x4*n)))
#define NVIC_PENDn(n)                    *((volatile uint32*)(0xE000E200+ (0x4*n)))
#define NVIC_UNPENDn(n)                  *((volatile uint32*)(0xE000E280+ (0x4*n)))
#define NVIC_ACTIVEn(n)                  *((volatile uint32*)(0xE000E300+ (0x4*n)))
#define NVIC_PRIn(n)                     *((volatile uint32*)(0xE000E400+ (0x4*n)))
 


/*****************
 *End of the file*
 *****************/

 #endif
	