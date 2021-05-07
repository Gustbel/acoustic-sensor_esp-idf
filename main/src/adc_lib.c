#include <string.h>
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "esp_log.h"
#include "driver/adc.h"
#include "adc_lib.h"

void init_ADC1_CH0()
{
    adc1_config_width(ADC_WIDTH_BIT_DEFAULT);
    adc1_config_channel_atten(ADC1_CHANNEL_0, ADC_ATTEN_DB_0); // ADC_ATTEN_DB_0 is the attenuation voltage (more attenuation allows more voltage)
}

int read_ADC1_CH0()
{
    int adc1_ch0_reading = {0xcc};

    adc1_ch0_reading = adc1_get_raw(ADC1_CHANNEL_0);

	return adc1_ch0_reading;
}
