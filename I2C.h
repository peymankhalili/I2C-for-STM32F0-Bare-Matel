#ifndef I2C_H
#define I2C_H
#include "stm32f0xx.h"
#include "stm32f030x6.h"

//Defines------------------------------------------
#define Enable_I2C1_Clock								 0x200000
#define GPIO_Aternate_Function_I2C1	 		 0x440  //(0b0100)<<4 | (0b0100)<<8 //AF4
#define Addressing_Mode 0b0 //0-for 7-bit 1-for 10-bit
#define NBytes 7
#define Transfer_Direction 0

//-------------------------------------------------

//functions
void I2C_Init(void);
void I2C_Send(char ,char );

#endif

