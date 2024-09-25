#include <stdio.h>
#include <stdlib.h>

int main()
{
   char n;
   printf("entre le caractère :");
   scanf("%c" , &n);

   switch (n) {
   case  'a' :
       printf("le caractère est une voyelle");
        break;
   case  'e' :
       printf("le caractère est une voyelle");
        break;
   case 'i' :
       printf("le caractère est une voyelle");
        break;
        case 'u' :
       printf("le caractère est une voyelle");
        break;
        case  'y' :
       printf("le caractère est une voyelle");
        break;
         case 'o' :
       printf("le caractère est une voyelle");
        break;

        default :
            printf("le caractere est consonnes");


   }
    return 0;
}
