#include "esfera_utils.h"
#include <math.h>

float calcula_volume (float R){
    float volume = 0;

    volume = (float)4/3*PI*pow((double) R,3);

    return volume;
}

float calcula_area (float R){
    float area = 0;

    area = 4*PI*pow((double) R,2);

    return area;
}
