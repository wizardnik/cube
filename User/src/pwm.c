#include "pwm.h"   

//------------------------------------------------
// R_VD1
//------------------------------------------------
uint8_t rvd1_counter=0;
uint8_t rvd1_flag_on=0;

void rvd1pwm(void)
{
	if (rvd1_flag_on == 1)
	{	
	if(rvd1_counter >= r1b)
	{
		rvd1_counter = 0;
		R_VD1_ON;

	} else if (rvd1_counter == r1a) {
		rvd1_counter++;
		R_VD1_OFF;
	} else {
		rvd1_counter++;
	}
	}}

void rvd1_led_on(void)
{
	rvd1_flag_on = 1;
}

void rvd1_led_off(void)
{
	rvd1_flag_on = 0;
}
//------------------------------------------------
// R_VD2
//------------------------------------------------
uint8_t rvd2_counter=0;
uint8_t rvd2_flag_on=0;

void rvd2pwm(void)
{
	if (rvd2_flag_on == 1)
	{	
	if(rvd2_counter >= r2b)
	{
		rvd2_counter = 0;
		R_VD2_ON;

	} else if (rvd2_counter == r2a) {
		rvd2_counter++;
		R_VD2_OFF;
	} else {
		rvd2_counter++;
	}
	}}

void rvd2_led_on(void)
{
	rvd2_flag_on = 1;
}

void rvd2_led_off(void)
{
	rvd2_flag_on = 0;
}
//------------------------------------------------
// R_VD3
//------------------------------------------------
uint8_t rvd3_counter=0;
uint8_t rvd3_flag_on=0;

void rvd3pwm(void)
{
	if (rvd3_flag_on == 1)
	{	
	if(rvd3_counter >= r3b)
	{
		rvd3_counter = 0;
		R_VD3_ON;

	} else if (rvd3_counter == r3a) {
		rvd3_counter++;
		R_VD3_OFF;
	} else {
		rvd3_counter++;
	}
	}}

void rvd3_led_on(void)
{
	rvd3_flag_on = 1;
}

void rvd3_led_off(void)
{
	rvd3_flag_on = 0;
}
//------------------------------------------------
// R_VD4
//------------------------------------------------
uint8_t rvd4_counter=0;
uint8_t rvd4_flag_on=0;

void rvd4pwm(void)
{
	if (rvd4_flag_on == 1)
	{	
	if(rvd4_counter >= r4b)
	{
		rvd4_counter = 0;
		R_VD4_ON;

	} else if (rvd4_counter == r4a) {
		rvd4_counter++;
		R_VD4_OFF;
	} else {
		rvd4_counter++;
	}
	}}

void rvd4_led_on(void)
{
	rvd4_flag_on = 1;
}

void rvd4_led_off(void)
{
	rvd4_flag_on = 0;
}
//------------------------------------------------
// R_VD5
//------------------------------------------------
uint8_t rvd5_counter=0;
uint8_t rvd5_flag_on=0;

void rvd5pwm(void)
{
	if (rvd5_flag_on == 1)
	{	
	if(rvd5_counter >= r5b)
	{
		rvd5_counter = 0;
		R_VD5_ON;

	} else if (rvd5_counter == r5a) {
		rvd5_counter++;
		R_VD5_OFF;
	} else {
		rvd5_counter++;
	}
	}}

void rvd5_led_on(void)
{
	rvd5_flag_on = 1;
}

void rvd5_led_off(void)
{
	rvd5_flag_on = 0;
}
//------------------------------------------------
// R_VD6
//------------------------------------------------
uint8_t rvd6_counter=0;
uint8_t rvd6_flag_on=0;

void rvd6pwm(void)
{
	if (rvd6_flag_on == 1)
	{	
	if(rvd6_counter >= r6b)
	{
		rvd6_counter = 0;
		R_VD6_ON;

	} else if (rvd6_counter == r6a) {
		rvd6_counter++;
		R_VD6_OFF;
	} else {
		rvd6_counter++;
	}
	}}

void rvd6_led_on(void)
{
	rvd6_flag_on = 1;
}

void rvd6_led_off(void)
{
	rvd6_flag_on = 0;
}
//------------------------------------------------
// R_VD7
//------------------------------------------------
uint8_t rvd7_counter=0;
uint8_t rvd7_flag_on=0;

void rvd7pwm(void)
{
	if (rvd7_flag_on == 1)
	{	
	if(rvd7_counter >= r7b)
	{
		rvd7_counter = 0;
		R_VD7_ON;

	} else if (rvd7_counter == r7a) {
		rvd7_counter++;
		R_VD7_OFF;
	} else {
		rvd7_counter++;
	}
	}}

void rvd7_led_on(void)
{
	rvd7_flag_on = 1;
}

void rvd7_led_off(void)
{
	rvd7_flag_on = 0;
}
//------------------------------------------------
// R_VD8
//------------------------------------------------
uint8_t rvd8_counter=0;
uint8_t rvd8_flag_on=0;

void rvd8pwm(void)
{
	if (rvd8_flag_on == 1)
	{	
	if(rvd8_counter >= r8b)
	{
		rvd8_counter = 0;
		R_VD8_ON;
	} else if (rvd8_counter == r8a) {
		rvd8_counter++;
		R_VD8_OFF;
	} else {
		rvd8_counter++;
	}
}}

void rvd8_led_on(void)
{
	rvd8_flag_on = 1;
}

void rvd8_led_off(void)
{
	rvd8_flag_on = 0;
}
//------------------------------------------------
// R_VD9
//------------------------------------------------
uint8_t rvd9_counter=0;
uint8_t rvd9_flag_on=0;

void rvd9pwm(void)
{
	if (rvd8_flag_on == 1)
	{	
	if(rvd9_counter >= r9b)
	{
		rvd9_counter = 0;
		R_VD9_ON;

	} else if (rvd9_counter == r9a) {
		rvd9_counter++;
		R_VD9_OFF;
	} else {
		rvd9_counter++;
	}
	}}

void rvd9_led_on(void)
{
	rvd9_flag_on = 1;
}

void rvd9_led_off(void)
{
	rvd9_flag_on = 0;
}
//------------------------------------------------
// G_VD1
//------------------------------------------------
uint8_t gvd1_counter=0;
uint8_t gvd1_flag_on=0;

void gvd1pwm(void)
{
	if (gvd1_flag_on == 1)
	{	
	if(gvd1_counter >= g1b)
	{
		gvd1_counter = 0;
		G_VD1_ON;

	} else if (gvd1_counter == g1a) {
		gvd1_counter++;
		G_VD1_OFF;
	} else {
		gvd1_counter++;
	}
}}

void gvd1_led_on(void)
{
	gvd1_flag_on = 1;
}

void gvd1_led_off(void)
{
	gvd1_flag_on = 0;
}
//------------------------------------------------
// G_VD2
//------------------------------------------------
uint8_t gvd2_counter=0;
uint8_t gvd2_flag_on=0;

void gvd2pwm(void)
{
	if (gvd2_flag_on == 1)
	{	
	if(gvd2_counter >= g2b)
	{
		gvd2_counter = 0;
		G_VD2_ON;

	} else if (gvd2_counter == g2a) {
		gvd2_counter++;
		G_VD2_OFF;
	} else {
		gvd2_counter++;
	}
}}

void gvd2_led_on(void)
{
	gvd2_flag_on = 1;
}

void gvd2_led_off(void)
{
	gvd2_flag_on = 0;
}
//------------------------------------------------
// G_VD3
//------------------------------------------------
uint8_t gvd3_counter=0;
uint8_t gvd3_flag_on=0;

void gvd3pwm(void)
{
	if (gvd3_flag_on == 1)
	{	
	if(gvd3_counter >= g3b)
	{
		gvd3_counter = 0;
		G_VD3_ON;

	} else if (gvd3_counter == g3a) {
		gvd3_counter++;
		G_VD3_OFF;
	} else {
		gvd3_counter++;
	}
}}

void gvd3_led_on(void)
{
	gvd3_flag_on = 1;
}

void gvd3_led_off(void)
{
	gvd3_flag_on = 0;
}
//------------------------------------------------
// G_VD4
//------------------------------------------------
uint8_t gvd4_counter=0;
uint8_t gvd4_flag_on=0;

void gvd4pwm(void)
{
	if (gvd4_flag_on == 1)
	{	
	if(gvd4_counter >= g4b)
	{
		gvd4_counter = 0;
		G_VD4_ON;

	} else if (gvd4_counter == g4a) {
		gvd4_counter++;
		G_VD4_OFF;
	} else {
		gvd4_counter++;
	}
}}

void gvd4_led_on(void)
{
	gvd4_flag_on = 1;
}

void gvd4_led_off(void)
{
	gvd4_flag_on = 0;
}
//------------------------------------------------
// G_VD5
//------------------------------------------------
uint8_t gvd5_counter=0;
uint8_t gvd5_flag_on=0;

void gvd5pwm(void)
{
	if (gvd5_flag_on == 1)
	{	
	if(gvd5_counter >= g5b)
	{
		gvd5_counter = 0;
		G_VD5_ON;

	} else if (gvd5_counter == g5a) {
		gvd5_counter++;
		G_VD5_OFF;
	} else {
		gvd5_counter++;
	}
}}

void gvd5_led_on(void)
{
	gvd5_flag_on = 1;
}

void gvd5_led_off(void)
{
	gvd5_flag_on = 0;
}
//------------------------------------------------
// G_VD6
//------------------------------------------------
uint8_t gvd6_counter=0;
uint8_t gvd6_flag_on=0;

void gvd6pwm(void)
{
	if (gvd6_flag_on == 1)
	{	
	if(gvd6_counter >= g6b)
	{
		gvd6_counter = 0;
		G_VD6_ON;

	} else if (gvd6_counter == g6a) {
		gvd6_counter++;
		G_VD6_OFF;
	} else {
		gvd6_counter++;
	}
}}

void gvd6_led_on(void)
{
	gvd6_flag_on = 1;
}

void gvd6_led_off(void)
{
	gvd6_flag_on = 0;
}
//------------------------------------------------
// G_VD7
//------------------------------------------------
uint8_t gvd7_counter=0;
uint8_t gvd7_flag_on=0;

void gvd7pwm(void)
{
	if (gvd7_flag_on == 1)
	{	
	if(gvd7_counter >= g7b)
	{
		gvd7_counter = 0;
		G_VD7_ON;

	} else if (gvd7_counter == g7a) {
		gvd7_counter++;
		G_VD7_OFF;
	} else {
		gvd7_counter++;
	}
}}

void gvd7_led_on(void)
{
	gvd7_flag_on = 1;
}

void gvd7_led_off(void)
{
	gvd7_flag_on = 0;
}
//------------------------------------------------
// G_VD8
//------------------------------------------------
uint8_t gvd8_counter=0;
uint8_t gvd8_flag_on=0;

void gvd8pwm(void)
{
	if (gvd8_flag_on == 1)
	{	
	if(gvd8_counter >= g8b)
	{
		gvd8_counter = 0;
		G_VD8_ON;

	} else if (gvd8_counter == g8a) {
		gvd8_counter++;
		G_VD8_OFF;
	} else {
		gvd8_counter++;
	}
}}

void gvd8_led_on(void)
{
	gvd8_flag_on = 1;
}

void gvd8_led_off(void)
{
	gvd8_flag_on = 0;
}
//------------------------------------------------
// G_VD9
//------------------------------------------------
uint8_t gvd9_counter=0;
uint8_t gvd9_flag_on=0;

void gvd9pwm(void)
{
	if (gvd9_flag_on == 1)
	{	
	if(gvd9_counter >= g9b)
	{
		gvd9_counter = 0;
		G_VD9_ON;

	} else if (gvd9_counter == g9a) {
		gvd9_counter++;
		G_VD9_OFF;
	} else {
		gvd9_counter++;
	}
}}

void gvd9_led_on(void)
{
	gvd9_flag_on = 1;
}

void gvd9_led_off(void)
{
	gvd9_flag_on = 0;
}
//------------------------------------------------
// B_VD1
//------------------------------------------------
uint8_t bvd1_counter=0;
uint8_t bvd1_flag_on=0;

void bvd1pwm(void)
{
	if (bvd1_flag_on == 1)
	{	
	if(bvd1_counter >= b1b)
	{
		bvd1_counter = 0;
		B_VD1_ON;

	} else if (bvd1_counter == b1a) {
		bvd1_counter++;
		B_VD1_OFF;
	} else {
		bvd1_counter++;
	}
}}

void bvd1_led_on(void)
{
	bvd1_flag_on = 1;
}

void bvd1_led_off(void)
{
	bvd1_flag_on = 0;
}
//------------------------------------------------
// B_VD2
//------------------------------------------------
uint8_t bvd2_counter=0;
uint8_t bvd2_flag_on=0;

void bvd2pwm(void)
{
	if (bvd2_flag_on == 1)
	{	
	if(bvd2_counter >= b2b)
	{
		bvd2_counter = 0;
		B_VD2_ON;

	} else if (bvd2_counter == b2a) {
		bvd2_counter++;
		B_VD2_OFF;
	} else {
		bvd2_counter++;
	}
}}

void bvd2_led_on(void)
{
	bvd2_flag_on = 1;
}

void bvd2_led_off(void)
{
	bvd2_flag_on = 0;
}
//------------------------------------------------
// B_VD3
//------------------------------------------------
uint8_t bvd3_counter=0;
uint8_t bvd3_flag_on=0;

void bvd3pwm(void)
{
	if (bvd3_flag_on == 1)
	{	
	if(bvd3_counter >= b3b)
	{
		bvd3_counter = 0;
		B_VD3_ON;

	} else if (bvd3_counter == b3a) {
		bvd3_counter++;
		B_VD3_OFF;
	} else {
		bvd3_counter++;
	}
}}

void bvd3_led_on(void)
{
	bvd3_flag_on = 1;
}

void bvd3_led_off(void)
{
	bvd3_flag_on = 0;
}
//------------------------------------------------
// B_VD4
//------------------------------------------------
uint8_t bvd4_counter=0;
uint8_t bvd4_flag_on=0;

void bvd4pwm(void)
{
	if (bvd4_flag_on == 1)
	{	
	if(bvd4_counter >= b4b)
	{
		bvd4_counter = 0;
		B_VD4_ON;

	} else if (bvd4_counter == b4a) {
		bvd4_counter++;
		B_VD4_OFF;
	} else {
		bvd4_counter++;
	}
}}

void bvd4_led_on(void)
{
	bvd4_flag_on = 1;
}

void bvd4_led_off(void)
{
	bvd4_flag_on = 0;
}
//------------------------------------------------
// B_VD5
//------------------------------------------------
uint8_t bvd5_counter=0;
uint8_t bvd5_flag_on=0;

void bvd5pwm(void)
{
	if (bvd5_flag_on == 1)
	{	
	if(bvd5_counter >= b5b)
	{
		bvd5_counter = 0;
		B_VD5_ON;

	} else if (bvd5_counter == b5a) {
		bvd5_counter++;
		B_VD5_OFF;
	} else {
		bvd5_counter++;
	}
}}

void bvd5_led_on(void)
{
	bvd5_flag_on = 1;
}

void bvd5_led_off(void)
{
	bvd5_flag_on = 0;
}
//------------------------------------------------
// B_VD6
//------------------------------------------------
uint8_t bvd6_counter=0;
uint8_t bvd6_flag_on=0;

void bvd6pwm(void)
{
	if (bvd6_flag_on == 1)
	{	
	if(bvd6_counter >= b6b)
	{
		bvd6_counter = 0;
		B_VD6_ON;

	} else if (bvd6_counter == b6a) {
		bvd6_counter++;
		B_VD6_OFF;
	} else {
		bvd6_counter++;
	}
}}

void bvd6_led_on(void)
{
	bvd6_flag_on = 1;
}

void bvd6_led_off(void)
{
	bvd6_flag_on = 0;
}
//------------------------------------------------
// B_VD7
//------------------------------------------------
uint8_t bvd7_counter=0;
uint8_t bvd7_flag_on=0;

void bvd7pwm(void)
{
	if (bvd7_flag_on == 1)
	{	
	if(bvd7_counter >= b7b)
	{
		bvd7_counter = 0;
		B_VD7_ON;

	} else if (bvd7_counter == b7a) {
		bvd7_counter++;
		B_VD7_OFF;
	} else {
		bvd7_counter++;
	}
}}

void bvd7_led_on(void)
{
	bvd7_flag_on = 1;
}

void bvd7_led_off(void)
{
	bvd7_flag_on = 0;
}
//------------------------------------------------
// B_VD8
//------------------------------------------------
uint8_t bvd8_counter=0;
uint8_t bvd8_flag_on=0;

void bvd8pwm(void)
{
	if (bvd8_flag_on == 1)
	{	
	if(bvd8_counter >= b8b)
	{
		bvd8_counter = 0;
		B_VD8_ON;

	} else if (bvd8_counter == b8a) {
		bvd8_counter++;
		B_VD8_OFF;
	} else {
		bvd8_counter++;
	}
}}

void bvd8_led_on(void)
{
	bvd8_flag_on = 1;
}

void bvd8_led_off(void)
{
	bvd8_flag_on = 0;
}
//------------------------------------------------
// B_VD9
//------------------------------------------------
uint8_t bvd9_counter=0;
uint8_t bvd9_flag_on=0;

void bvd9pwm(void)
{
	if (bvd9_flag_on == 1)
	{	
	if(bvd9_counter >= b9b)
	{
		bvd9_counter = 0;
		B_VD9_ON;

	} else if (bvd9_counter == b9a) {
		bvd9_counter++;
		B_VD9_OFF;
	} else {
		bvd9_counter++;
	}
}}

void bvd9_led_on(void)
{
	bvd9_flag_on = 1;
}

void bvd9_led_off(void)
{
	bvd9_flag_on = 0;
}
