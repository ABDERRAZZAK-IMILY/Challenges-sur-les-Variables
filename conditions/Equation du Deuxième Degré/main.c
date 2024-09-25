#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a , b , c , x1, x2 , delta, x0;

    printf("entre les parametre a , b , c de les equation ax^2+bx+c\n");
    printf("entre a :");
    scanf("%f" , &a);
    printf("entre b :");
    scanf("%f" , &b);
    printf("entre c :");
    scanf("%f" , &c);
    delta = powf(b,2)-(4*a*c);
   x1 = (-b+sqrt(delta))/2*a;
   x2 = (-b-sqrt(delta))/2*a;
    x0 = -b/2*a;
    if (a == 0) {
            ("printf fonction liner");
    }else if (delta < 0) {
        printf("l'équation admet aucune solution réelle.");
    } else if (delta = 0){

     printf("l'équation admet une unique solution %f" , x0);
    }else if (delta > 0) {

    printf("alors l'équation a deux solutions x1 = %f et x2 = %f" , x1 , x2);

   }
}
