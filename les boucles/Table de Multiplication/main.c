#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,result ,i;

    printf("entre le nombre :");

    scanf("%d" , &nb);
    for (i=0 ; i<= 10;i++){
        result = nb * i;

        printf("%d\n" , result);

    }

    return 0;
}
