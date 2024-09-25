#include <stdio.h>

int main(){
    double nombre1, nombre2, nombre3;
    double pond1 = 2.0, pond2 = 3.0, pond3 = 5.0;
    double moyenne;

    printf("Entrez le premiere nombre :");
    scanf("%lf",&nombre1);

    printf("Entrez le deuxieme nombre :");
    scanf("%lf",&nombre2);

    printf("Entrez le troisieme nombre :");
    scanf("%lf",&nombre3);

    moyenne = (nombre1 * pond1 + nombre2 * pond2 + nombre3 * pond3) / (pond1 + pond2 + pond3);

    printf("La moyenne pondree est : %.2lf", moyenne);
}