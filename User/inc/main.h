#ifndef MAIN_H
#define MAIN_H

#include "stm32f0xx.h" 
#include "mcu_ini.h"
#include "pwm.h" 
#include "alphabet.h" 
#include "button.h" 
  

//---------------------------------------------------------------
//MCU_INI
//---------------------------------------------------------------
#define PA	GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_15
//---------------------------------------------------------------
//LED
//---------------------------------------------------------------
#define R_VD1_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_8) 
#define R_VD1_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_8) 
#define G_VD1_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_11) 
#define G_VD1_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_11) 
#define B_VD1_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_7) 
#define B_VD1_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_7) 
#define R_VD2_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_4) 
#define R_VD2_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_4) 
#define G_VD2_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_2) 
#define G_VD2_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_2) 
#define B_VD2_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_9) 
#define B_VD2_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_9) 
#define R_VD3_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_5) 
#define R_VD3_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_5) 
#define G_VD3_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_12) 
#define G_VD3_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_12) 
#define B_VD3_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_6) 
#define B_VD3_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_6) 
#define R_VD4_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_9) 
#define R_VD4_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_9) 
#define G_VD4_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_4) 
#define G_VD4_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_4) 
#define B_VD4_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_10) 
#define B_VD4_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_10) 
#define R_VD5_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_10) 
#define R_VD5_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_10) 
#define G_VD5_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_2) 
#define G_VD5_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_2) 
#define B_VD5_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_3) 
#define B_VD5_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_3) 
#define R_VD6_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_1) 
#define R_VD6_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_1) 
#define G_VD6_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_3) 
#define G_VD6_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_3) 
#define B_VD6_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_5) 
#define B_VD6_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_5) 
#define R_VD7_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_15) 
#define R_VD7_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_15) 
#define G_VD7_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_14) 
#define G_VD7_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_14) 
#define B_VD7_ON  		GPIO_SetBits(GPIOA, GPIO_Pin_7) 
#define B_VD7_OFF  		GPIO_ResetBits(GPIOA, GPIO_Pin_7) 
#define R_VD8_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_6) 
#define R_VD8_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_6) 
#define G_VD8_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_15) 
#define G_VD8_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_15) 
#define B_VD8_ON  		GPIO_SetBits(GPIOB, GPIO_Pin_0) 
#define B_VD8_OFF  		GPIO_ResetBits(GPIOB, GPIO_Pin_0) 
#define R_VD9_ON 			GPIO_SetBits(GPIOA, GPIO_Pin_8) 
#define R_VD9_OFF 		GPIO_ResetBits(GPIOA, GPIO_Pin_8) 
#define G_VD9_ON 			GPIO_SetBits(GPIOB, GPIO_Pin_13) 
#define G_VD9_OFF		 	GPIO_ResetBits(GPIOB, GPIO_Pin_13) 
#define B_VD9_ON		 	GPIO_SetBits(GPIOB, GPIO_Pin_1) 
#define B_VD9_OFF		 	GPIO_ResetBits(GPIOB, GPIO_Pin_1)
#define RVD_ALL_ON 		R_VD1_ON; R_VD2_ON; R_VD3_ON; R_VD4_ON; R_VD5_ON; R_VD6_ON; R_VD7_ON; R_VD8_ON; R_VD9_ON; 
#define GVD_ALL_ON 		G_VD1_ON; G_VD2_ON; G_VD3_ON; G_VD4_ON; G_VD5_ON; G_VD6_ON; G_VD7_ON; G_VD8_ON; G_VD9_ON; 
#define BVD_ALL_ON 		B_VD1_ON; B_VD2_ON; B_VD3_ON; B_VD4_ON; B_VD5_ON; B_VD6_ON; B_VD7_ON; B_VD8_ON; B_VD9_ON; 
#define RVD_ALL_OFF 		R_VD1_OFF; R_VD2_OFF; R_VD3_OFF; R_VD4_OFF; R_VD5_OFF; R_VD6_OFF; R_VD7_OFF; R_VD8_OFF; R_VD9_OFF; 
#define GVD_ALL_OFF 		G_VD1_OFF; G_VD2_OFF; G_VD3_OFF; G_VD4_OFF; G_VD5_OFF; G_VD6_OFF; G_VD7_OFF; G_VD8_OFF; G_VD9_OFF; 
#define BVD_ALL_OFF 		B_VD1_OFF; B_VD2_OFF; B_VD3_OFF; B_VD4_OFF; B_VD5_OFF; B_VD6_OFF; B_VD7_OFF; B_VD8_OFF; B_VD9_OFF;
//---------------------------------------------------------------
//����� �������
//---------------------------------------------------------------
#define CHG_ON  			GPIO_SetBits(GPIOF, GPIO_Pin_1) 
#define CHG_OFF  			GPIO_ResetBits(GPIOF, GPIO_Pin_1) 
//---------------------------------------------------------------
//PWM
//---------------------------------------------------------------
#define r1a						1
#define r1b						20
#define r2a						1
#define r2b						20
#define r3a						1
#define r3b						20
#define r4a						1
#define r4b						20
#define r5a						1
#define r5b						20
#define r6a						1
#define r6b						20
#define r7a						1
#define r7b						20
#define r8a						1
#define r8b						20
#define r9a						1
#define r9b						20
#define g1a						1
#define g1b						10
#define g2a						1
#define g2b						10
#define g3a						1
#define g3b						10
#define g4a						1
#define g4b						10
#define g5a						1
#define g5b						10
#define g6a						1
#define g6b						10
#define g7a						1
#define g7b						10
#define g8a						1
#define g8b						10
#define g9a						1
#define g9b						10
#define b1a						1
#define b1b						20
#define b2a						1
#define b2b						20
#define b3a						1
#define b3b						20
#define b4a						1
#define b4b						40
#define b5a						1
#define b5b						40
#define b6a						1
#define b6b						40
#define b7a						1
#define b7b						20
#define b8a						1
#define b8b						20
#define b9a						1
#define b9b						20
//------------------------------------
//������
//------------------------------------
#define button1_read  GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_13)
#define button2_read  GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_11)

#define b1press 			1
#define b1unpress			0
#define b2press 			1
#define b2unpress			0

//------------------------------------
//ALPHABET
//------------------------------------
/*#define abc192 					//�
#define abc193 					//�
#define abc194 					//�
#define abc195 					//�
#define abc196 					//�
#define abc197 					//�
#define abc198 					//�
#define abc199 					//�
#define abc200 					//�
#define abc201 					//�
#define abc202					//�
#define abc203 					//�
#define abc204 					//�
#define abc205 					//�
#define abc206 					//�
#define abc207 					//�
#define abc208 					//�
#define abc209 					//�
#define abc210 					//�
#define abc211 					//�
#define abc212 					//�
#define abc213 					//�
#define abc214 					//�
#define abc215 					//�
#define abc216 					//�
#define abc217 					//�
#define abc218 					//�
#define abc219 					//�
#define abc220 					//�
#define abc221 					//�
#define abc222 					//�
#define abc223 					//�

#define abc224 					//�
#define abc225 					//�
#define abc226 					//�
#define abc227 					//�
#define abc228 					//�
#define abc229 					//�
#define abc230 					//�
#define abc231				 	//�
#define abc232 					//�
#define abc233 					//�
#define abc234 					//�
#define abc235 					//�
#define abc236 					//�
#define abc237 					//�
#define abc238 					//�
#define abc239 					//�
#define abc240 					//�
#define abc241 					//�
#define abc242 					//�
#define abc243 					//�
#define abc244 					//�
#define abc245 					//�
#define abc246 					//�
#define abc247 					//�
#define abc248 					//�
#define abc249 					//�
#define abc250 					//�
#define abc251 					//�
#define abc252 					//�
#define abc253 					//�
#define abc254				 	//�
#define abc255				 	//�*/

#endif
