/*
 * DC_Motor.h
 *
 *  Created on: Jan 6, 2023
 *      Author: zas
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#define DC_MOTOR_PIN1 8
#define DC_MOTOR_PIN2 9

#define STOP 0
#define CW   1
#define ACW  2
void DcMotor_Control(uint8 state,uint8 speed);

#endif /* DC_MOTOR_H_ */
