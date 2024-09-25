#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    printf("entre le nombre :");
    scanf("%f" , &nb);

    if  (nb % 2 == 0){

        printf("le nombre est paire");
    }else {
        printf("le nombre est impaire");
    }
    return 0;
}
