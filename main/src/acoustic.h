#ifndef __BME280_H__
#define __BME280_H__

#include <errno.h>
#include <stdint.h>
#include <stdbool.h>

void init_acoustic(bool);
char* get_acoustic_analog();
char* get_acoustic_digital();

#endif
