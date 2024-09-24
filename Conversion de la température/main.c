#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius , Kelvin;
    printf("%s" , "entre la température en Celsius : ");
    scanf("%f" , &Celsius);

    Kelvin = Celsius + 273.15;

    printf("la temperature en kelvin et %f" , Kelvin);

}
