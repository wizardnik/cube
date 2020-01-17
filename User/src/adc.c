#include "adc.h"

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
