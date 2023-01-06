
#include "Macros/STD_Types.h"
#include "Macros/BIT_Math.h"
#include "MCAL/DIO/DIO_int.h"
#include "MCAL/TIMER0/TIM0_int.h"
#include "MCAL/ADC/ADC_int.h"
#include "HAL/LM35/Lm35.h"
#include "HAL/LCD/LCD_int.h"
#include "HAL/DCMOTOR/DC_Motor.h"

uint8 Temp;
void main(void)
{

	DIO_voidInit();
	TIM0_voidInit();
	ADC_voidInit();
	LCD_voidInit();
	while(1)
	{
		LCD_vidGoToXY(0,0,1);
		LCD_voidSendString(0,"fan ");
		LCD_vidGoToXY(0,0,2);
		LCD_voidSendString(0,"Temp ");

		Temp=Lm35_Read();
		if((Temp>=0)&&(Temp<30))
		{
			LCD_vidGoToXY(0,5,1);
			LCD_voidSendString(0,"OFF");
			LCD_vidGoToXY(0,6,2);
			LCD_voidSendNumber(0,Temp);
			DcMotor_Control(STOP,0);

		}
	    else if((Temp>=30)&&(Temp<60))
		{
	    	LCD_vidGoToXY(0,5,1);
	    	LCD_voidSendString(0,"ON ");
			LCD_vidGoToXY(0,6,2);
			LCD_voidSendNumber(0,Temp);
			DcMotor_Control(CW,30);

		}
		else if((Temp>=60)&&(Temp<90))
		{
	    	LCD_vidGoToXY(0,5,1);
	    	LCD_voidSendString(0,"ON ");
			LCD_vidGoToXY(0,6,2);
			LCD_voidSendNumber(0,Temp);
			DcMotor_Control(CW,60);

		}
		else if((Temp>=90)&&(Temp<120))
		{
	    	LCD_vidGoToXY(0,5,1);
	    	LCD_voidSendString(0,"ON ");
			LCD_vidGoToXY(0,6,2);
			LCD_voidSendNumber(0,Temp);
			DcMotor_Control(CW,80);

		}
		else
		{
	    	LCD_vidGoToXY(0,5,1);
	    	LCD_voidSendString(0,"ON ");
			LCD_vidGoToXY(0,6,2);
			LCD_voidSendNumber(0,Temp);
			DcMotor_Control(CW,100);

		}


	}

}


