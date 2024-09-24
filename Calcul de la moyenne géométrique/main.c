#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,c;
    float Moyenne;
    printf("PRINT a:");
    scanf("%f" ,&a);
    printf("PRINT b:");
    scanf("%f" , &b);
    printf("PRINT c:");
    scanf("%f", &c);
    Moyenne = cbrt(a * b * c);

    printf("la moyenne géométrique est : %f " , Moyenne);
    return 0;
}
