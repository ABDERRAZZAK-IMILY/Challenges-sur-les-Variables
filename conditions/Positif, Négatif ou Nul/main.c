#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    printf("entre le nombre :");
    scanf("%d" , &nb);
    if (nb > 0) {
        printf("le nombre positive");
    }else if (nb < 0) {

        printf("le nombre nigative");
    }else {
       printf("le nombre egale zero");
    }
    return 0;
}
