#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
     srand(time(0));
    char jour[7][10] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
       int random = rand()% 7;
    printf("%s" , jour[random]);
    return 0;
}
