#include <stdio.h>
#include <stdlib.h>

int main()
{
   char n;
   printf("entre le caract�re :");
   scanf("%c" , &n);

   switch (n) {
   case  'a' :
       printf("le caract�re est une voyelle");
        break;
   case  'e' :
       printf("le caract�re est une voyelle");
        break;
   case 'i' :
       printf("le caract�re est une voyelle");
        break;
        case 'u' :
       printf("le caract�re est une voyelle");
        break;
        case  'y' :
       printf("le caract�re est une voyelle");
        break;
         case 'o' :
       printf("le caract�re est une voyelle");
        break;

        default :
            printf("le caractere est consonnes");


   }
    return 0;
}
