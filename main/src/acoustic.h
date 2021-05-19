#ifndef __BME280_H__
#define __BME280_H__

#include <errno.h>
#include <stdint.h>
#include <stdbool.h>

void init_acoustic();
float get_acoustic_analog();

#endif
