#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_tls.h"

#include "src/acoustic.h"


void app_main(void)
{
	printf("\n	-- Acoustic Sensor lib test --\n");	

	// Init Sensor
	init_acoustic(true);		

	while(1)
	{
		printf("Sound Level in dB: %s\n\n", get_acoustic_analog());
		vTaskDelay(700 / portTICK_PERIOD_MS);
	}
}
