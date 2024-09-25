#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , result;
    printf("entre le premier nombre :");
    scanf("%d" , &a);
    printf("entre le deuxsiem nombre :");
    scanf("%d" , &b);
    result = a + b;

    if (a == b) {

        printf("%d" , result * 3);
    }else {

        printf("%d" , result);
    }


    return 0;
}
