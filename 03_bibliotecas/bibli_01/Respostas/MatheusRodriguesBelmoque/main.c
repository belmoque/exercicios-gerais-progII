#include <stdio.h>
#include "esfera_utils.h"

int main(){
    float R=0,volume,area;

    scanf("%f",&R);

    area = calcula_area(R);

    volume = calcula_volume(R);

    printf("Area: %.2f\nVolume: %.2f",area,volume);

    return 0;
}