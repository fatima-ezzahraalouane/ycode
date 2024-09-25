#include <stdio.h>
int main(){
    char nom[50], prenom[50], sexe[50], adresse_email[100];
    int age;
    printf("Entrez votre nom : ");
    scanf("%s", nom );

    printf("Entrez votre prenom :");
    scanf("%s", prenom );

    printf("Entrez votre age : ");
    scanf("%d", &age );

    printf("Entrez votre sexe : ");
    scanf("%s", sexe );

    printf("Entrez votre adresse email : ");
    scanf("%s", adresse_email );

    printf("**** Informations personnelles **** \n");

    printf("Votre nom est : %s\n", nom);
    printf("Votre prenom est : %s\n", prenom);
    printf("Votre age est : %d\n", age);
    printf("Votre sexe est : %s\n", sexe);
    printf("Votre adresse email est : %s", adresse_email);

    return 0;
}