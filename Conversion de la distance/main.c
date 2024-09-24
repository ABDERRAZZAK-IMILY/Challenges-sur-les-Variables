#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, yards;
    printf("enter la distance en kilometre :");
    scanf("%f", &km);
    yards = km * 1093.61;
    printf("la distance en yards : %f" , yards);
}
