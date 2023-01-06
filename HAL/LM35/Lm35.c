/*
 * Lm35.c
 *
 *  Created on: Jan 6, 2023
 *      Author: zas
 */

#include "Lm35.h"

 uint16 Lm35_Read(void)
 {
	 uint16 digital,analog;
		digital=ADC_u16ReadSync();
		analog=((digital*500)/256);
		return analog;
 }


