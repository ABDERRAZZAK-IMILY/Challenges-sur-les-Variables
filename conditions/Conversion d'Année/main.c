#include <stdio.h>


int main(){
    int datenem;
    int valeur;

    printf("enter le nemero de la date format\n");
    printf("1.mois\n2.jours\n3.heures\n4.minutes\n5.secondes\n");
    scanf("%d", &datenem);
    printf("entree la valeur : \n");
    scanf("%d", &valeur);



    switch(datenem){
        case 1:
            printf("%d months", valeur*12);
            break;
        case 2:
            printf("%d days",  valeur*365);
            break;
        case 3:
            printf("%d hours", valeur*8760);
            break;
        case 4:
            printf("%d minutes",  valeur*525600);
            break;
        case 5:
            printf("%d seconds",  valeur*31536000);
            break;
    }

}
