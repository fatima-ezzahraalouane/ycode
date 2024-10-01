#include <stdio.h>

struct Personne
{
    char nom[20];
    char prenom[20];
    int age;
};

int main(){
    struct Personne personne;
    printf("Entrer votre nom : ");
    scanf("%s", personne.nom);

    printf("Entrer votre nom : ");
    scanf("%s", personne.prenom);

    printf("Entrer votre age : ");
    scanf("%d", &personne.age);

    printf("Nom : %s\n", personne.nom);
    printf("Prenom : %s\n", personne.prenom);
    printf("Age : %d\n", personne.age);

    return 0;
}