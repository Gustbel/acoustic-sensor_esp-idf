#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "esp_log.h"
#include "sdkconfig.h"

#include "adc_lib.h"

void init_acoustic()
{   
	// Init ADC - Analog Read GPIO0
	init_ADC1_CH0();
}

float get_acoustic_analog() 
{
	return (read_ADC1_CH0()*5.02);
}
