#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "esp_log.h"
#include "sdkconfig.h"

char buffer[100];
char* s;

void init_acoustic(bool ft)
{   

}

char* get_acoustic_analog() 
{
    return "0";
}

char* get_acoustic_digital() 
{
    return "False";
}
