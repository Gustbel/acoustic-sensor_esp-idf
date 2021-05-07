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

char buffer[8];
char* s;

void init_acoustic()
{   
	// Init ADC - Analog Read GPIO0
	init_ADC1_CH0();
}

char* get_acoustic_analog() 
{
	s = " ";
	sprintf(buffer, "%.2f", (read_ADC1_CH0()*5.02) );
	s=buffer;
	return s ;
}
