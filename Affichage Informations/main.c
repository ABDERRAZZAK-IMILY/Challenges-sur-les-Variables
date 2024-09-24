#include <stdio.h>
#include <stdlib.h>

int main()
{
 char nom[40];
 char prenom[40];
 int age;
 char sex[20];
 char email[60];
 printf("%s" , "entre le nom :");
 scanf("%s" , nom);
 printf("entre le prenom :");
 scanf("%s" , prenom);
 printf("entre age :");
 scanf("%d", &age);
 printf("%s" ,"entre sex :");
 scanf("%s" , sex);
 printf("%s" ,"entre email :");
 scanf("%s" , email);
 printf("ton nom et prenom est %s %s\n" , nom , prenom);
 printf("ton age est %d\n" , age);
 printf("ton sex est %s\n" , sex);
 printf("ton email est %s\n" , email);

}
