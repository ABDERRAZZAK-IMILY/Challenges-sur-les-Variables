#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;

    float m;

    printf( "entre le nombre 1 : ");
    scanf("%f" , &n1);
    printf( "entre le nombre 2 : ");
    scanf("%f" , &n2);
    printf("entre le nombre 3 : ");
    scanf("%f" ,&n3);

    m = (n1 * 2 + n2 * 3 + n3 * 5 )/10;

    printf("le Moyenne pondérée est %f\n", m );



     return 0;

}
