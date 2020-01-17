#include "main.h" 
#include "mcu_ini.h"
#include "stm32f0xx.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_rcc.h"

void LED_ini_PA(void)
{
	GPIO_InitTypeDef GPIO_Init_LEDPA;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
	
	GPIO_Init_LEDPA.GPIO_Pin = PA;
	GPIO_Init_LEDPA.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LEDPA.GPIO_Speed = GPIO_Speed_Level_1;
	GPIO_Init_LEDPA.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init_LEDPA.GPIO_OType = GPIO_OType_PP;

	GPIO_Init(GPIOA, &GPIO_Init_LEDPA);
}

void LED_ini_PB(void)
{
	GPIO_InitTypeDef GPIO_Init_LEDPB;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
	
	GPIO_Init_LEDPB.GPIO_Pin = GPIO_Pin_All;
	GPIO_Init_LEDPB.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Init_LEDPB.GPIO_Speed = GPIO_Speed_Level_1;
	GPIO_Init_LEDPB.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init_LEDPB.GPIO_OType = GPIO_OType_PP;

	GPIO_Init(GPIOB, &GPIO_Init_LEDPB);
}

void Button1_ini(void)
{
	GPIO_InitTypeDef GPIO_Init_LEDPC;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);
	
	GPIO_Init_LEDPC.GPIO_Pin = GPIO_Pin_13;
	GPIO_Init_LEDPC.GPIO_Mode = GPIO_Mode_IN;
	GPIO_Init_LEDPC.GPIO_Speed = GPIO_Speed_Level_1;
	GPIO_Init_LEDPC.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init_LEDPC.GPIO_OType = GPIO_OType_PP;

	GPIO_Init(GPIOC, &GPIO_Init_LEDPC);
}
	
void Button2_ini(void)
{
	GPIO_InitTypeDef GPIO_Init_LEDPF;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOF, ENABLE);
	
	GPIO_Init_LEDPF.GPIO_Pin = GPIO_Pin_11;
	GPIO_Init_LEDPF.GPIO_Mode = GPIO_Mode_IN;
	GPIO_Init_LEDPF.GPIO_Speed = GPIO_Speed_Level_1;
	GPIO_Init_LEDPF.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init_LEDPF.GPIO_OType = GPIO_OType_PP;

	GPIO_Init(GPIOF, &GPIO_Init_LEDPF);
}

void ADC_ini(void)
{
	GPIO_InitTypeDef GPIO_Init_PF;
	ADC_InitTypeDef ADC_Init_PA;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
	
	GPIO_Init_PF.GPIO_Pin = GPIO_Pin_0;
	GPIO_Init_PF.GPIO_Mode = GPIO_Mode_AN;
	GPIO_Init_PF.GPIO_Speed = GPIO_Speed_Level_1;
	GPIO_Init_PF.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init_PF.GPIO_OType = GPIO_OType_PP;

	GPIO_Init(GPIOA, &GPIO_Init_PF);
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
	
	ADC_Init_PA.ADC_Resolution = ADC_Resolution_12b;
  ADC_Init_PA.ADC_ContinuousConvMode = DISABLE;
	ADC_Init_PA.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;
	ADC_Init_PA.ADC_ExternalTrigConv = ADC_ExternalTrigConv_T1_TRGO;
  ADC_Init_PA.ADC_DataAlign = ADC_DataAlign_Right;
  ADC_Init_PA.ADC_ScanDirection = ADC_ScanDirection_Upward;
	
	ADC_Init(ADC1, &ADC_Init_PA);
	//CHANNEL
	ADC_ChannelConfig(ADC1, ADC_Channel_0, ADC_SampleTime_55_5Cycles);
	//REPAIR
	NVIC_EnableIRQ(ADC1_COMP_IRQn);
	
	ADC_ITConfig(ADC1, ADC_IT_EOC, ENABLE);
	
	ADC_Cmd(ADC1, ENABLE);
	
}

