#include <stdio.h>
#include <stdlib.h>

int main()
{
 float kmh, ms;
 printf("enter la vitesse en kilometre par heure (km/h) :");
 scanf("%f" , &kmh);
 ms = kmh * 0.27778;
 printf("la vitesse en metre par seconde (m/s) : %f" , ms);

}
