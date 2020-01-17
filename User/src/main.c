#include "stm32f0xx.h"   
#include "main.h" 
#include "mcu_ini.h"
#include "pwm.h"
#include "alphabet.h"
#include "button.h" 

uint16_t delay_count=0;
void delay_ms(uint16_t delay_temp)
{
	delay_count = delay_temp;
	
	while(delay_count){}
}

//-----------------------------------------------------
//
//-----------------------------------------------------

uint8_t button1_state=0;
uint8_t button1_count=0;
uint8_t button2_state=0;
uint8_t button2_count=0;


void SysTick_Handler (void) //1 ms
{
	if (delay_count>0)
	{
		delay_count--;
	}
	//----------------------------------

}
//-------------------------------------
/*	if (button2_read == 1)
	{
		if (button2_count < 20)
		{
			button2_count++;
		} else {
			if (button2_state == 0) 
			{
				button2_state=1;
				BVD_ALL_ON
			} 
		}
	} else {
		if (button2_count > 0)
		{
			button2_count--;
		} else {
			BVD_ALL_OFF
			button2_state=0;
		}
	}
	
		Systick_button1();
		Systick_button2();*/
		
		/*rvd1pwm();	bvd1pwm(); 	gvd1pwm();
		rvd2pwm();	bvd2pwm();	gvd2pwm();
		rvd3pwm();	bvd3pwm();	gvd3pwm();
		rvd4pwm();	bvd4pwm();	gvd4pwm();
		rvd5pwm();	bvd5pwm();	gvd5pwm();
		rvd6pwm();	bvd6pwm();	gvd6pwm();
		rvd7pwm();	bvd7pwm();	gvd7pwm();
		rvd8pwm();	bvd8pwm();	gvd8pwm();
		rvd9pwm();	bvd9pwm();	gvd9pwm();*/
//}
//-----------------------------------------------------
// ADC
//-----------------------------------------------------
/*uint16_t data_adc;
void ADC1_IRQHandler(void)
{
	if (ADC_GetITStatus(ADC1, ADC_IT_EOC) == SET)
	{
		ADC_ClearITPendingBit(ADC1, ADC_IT_EOC);
		
		data_adc = ADC_GetConversionValue(ADC1);
	}
}*/
//-----------------------------------------------------
// Таймер
//-----------------------------------------------------

//-----------------------------------------------------
//
//-----------------------------------------------------
int main(void)
{
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock/1000);//1 ms
	LED_ini_PA();
	LED_ini_PB();
	Button1_ini();
	Button2_ini();
	ADC_ini();
	
		
	while(1)
	{	

	if (button1_read == 1)
	{
		delay_ms(500);
		BVD_ALL_ON
		
	} else 
	{
		delay_ms(500);
		BVD_ALL_OFF

	}
		//button1_action();
		//button2_action();
		/*	ADC_StartOfConversion(ADC1);
		
		if (data_adc <= 1710)
		{
			G_VD1_OFF;
			R_VD1_ON;
			CHG_ON;
		} else if (data_adc >= 2380)
		{
			R_VD1_OFF;
			G_VD1_ON;
			CHG_OFF;
		} else 
			{
				G_VD1_OFF;
				R_VD1_ON;
				CHG_ON;
			}*/
			
		
	}
}
