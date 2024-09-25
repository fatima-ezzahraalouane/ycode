#include <stdio.h>
#include <math.h>

int main(){
    double longueur, largeur;
    double surface;

    printf("Entrez la longueur :");
    scanf("%lf", &longueur);

    printf("Entrez la largeur :");
    scanf("%lf", &largeur);

    surface = longueur * largeur;

    printf("La surface du rectangle : %.2lf", surface);

    return 0;
}