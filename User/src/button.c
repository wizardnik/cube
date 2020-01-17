#include "button.h"
/*//--------------------------------
// Антидребезг1
//--------------------------------
uint8_t counter1=0;
uint8_t b1state=0;
uint8_t b1flag[2];
void Systick_button1(void)
{
	uint8_t temp1;	
	temp1 = button1_read;
	
	if (temp1 == 0)
	{
		if(counter1 > 0)
		{
			counter1--;
		} else {
			if (b1state == 1) 
			{
				b1flag[b1unpress]++;
				b1state=0;
			}
		}
	} else {
		if(counter1 < 10)
		{
			counter1++;
		} else { 
			if (b1state == 0) 
			{
				b1flag[b1press]++;
				b1state=1;
			}
			}
	}
}
//---------------------------
uint8_t getB1flag(uint8_t num1)
{
	return b1flag[num1];
}
//----------------------------
void clearB1flag(uint8_t num1)
{
	if (b1flag[num1] > 0)
	{
		b1flag[num1]--;
	}
}
//----------------------------
void button1_action(void)
{
	if (getB1flag(b1press) > 0)
	{
		clearB1flag(b1press);
		RVD_ALL_ON
	}

	if (getB1flag(b1unpress) > 0)
	{
		clearB1flag(b1unpress);
		RVD_ALL_OFF
	}
}
//--------------------------------
// Антидребезг2
//--------------------------------
uint8_t counter2=0;
uint8_t b2state=0;
uint8_t b2flag[2];
void Systick_button2(void)
{
	uint8_t temp2;	
	temp2 = button2_read;
	
	if (temp2 == 0)
	{
		if(counter2 > 0)
		{
			counter2--;
		} else {
			if (b2state == 1) 
			{
				b2flag[b2unpress]++;
				b2state=0;
			}
		}
	} else {
		if(counter2 < 10)
		{
			counter2++;
		} else { 
			if (b2state == 0) 
			{
				b2flag[b2press]++;
				b2state=1;
			}
			}
	}
}
//---------------------------
uint8_t getB2flag(uint8_t num2)
{
	return b2flag[num2];
}
//----------------------------
void clearB2flag(uint8_t num2)
{
	if (b2flag[num2] > 0)
	{
		b2flag[num2]--;
	}
}
//----------------------------
void button2_action(void)
{
	if (getB2flag(b2press) > 0)
	{
		clearB2flag(b2press);
		RVD_ALL_OFF
	}
	
	if (getB2flag(b2unpress) > 0)
	{
		clearB2flag(b2unpress);
		RVD_ALL_OFF
	}
}
*/


