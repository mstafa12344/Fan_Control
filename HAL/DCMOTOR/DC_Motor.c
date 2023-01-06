#include "STD_Types.h"
#include "BIT_Math.h"
#include "TIM0_int.h"
#include "DC_Motor.h"

void DcMotor_Control(uint8 state,uint8 speed)
{
	if(state==STOP)
	{
		DIO_enuWritePin(DC_MOTOR_PIN1,0);
		DIO_enuWritePin(DC_MOTOR_PIN2,0);
		M_Timer_0_void_SetFastPWM(speed);
	}
	else if(state==CW)
	{
		DIO_enuWritePin(DC_MOTOR_PIN1,1);
		DIO_enuWritePin(DC_MOTOR_PIN2,0);
		M_Timer_0_void_SetFastPWM(speed);
	}
	else if(state==ACW)
	{
		DIO_enuWritePin(DC_MOTOR_PIN1,0);
		DIO_enuWritePin(DC_MOTOR_PIN2,1);
		M_Timer_0_void_SetFastPWM(speed);
	}
	else
	{
		/*Do nothing*/
	}
}
