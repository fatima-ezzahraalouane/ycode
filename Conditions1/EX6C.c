#include <stdio.h>

int main() {
    double nombre;

    printf("Entrez un nombre : ");
    scanf("%lf", &nombre);

    if (nombre > 0) {
        printf("Le nombre %.2lf est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %.2lf est négatif.\n", nombre);
    } 
    
    else 
        printf("Le nombre est nul.\n");
    
    return 0;
}
