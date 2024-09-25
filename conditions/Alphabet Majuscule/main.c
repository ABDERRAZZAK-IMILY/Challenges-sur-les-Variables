#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chare;
    printf("entre le caractère :");
    scanf("%c" , &chare);

    if (chare <= 'A' && chare <= 'Z') {
        printf("le e caractere donne est un alphabet majuscule");
        }else{
            printf("e caractere donne est pas un alphabet majuscule");
    }

    return 0;
}
