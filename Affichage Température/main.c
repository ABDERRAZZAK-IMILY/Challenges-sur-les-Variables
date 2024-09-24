#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    printf("enter la temperature en celsius :");
    scanf("%f" , &celsius);
    if (celsius < 0) {
        printf("l'état de l'eau est solide");
    } else if (0 <= celsius < 100) {
        printf("l'état de l'eau est liquide");
    }else if (celsius >= 100){
        printf("l'état de l'eau est gaz");
    }
}
