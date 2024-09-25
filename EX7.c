#include <stdio.h>

int main() {
    float nombre1, nombre2, nombre3;
    float pond1 = 2, pond2 = 3, pond3 = 5;
    float moyenne_ponderee;

    printf("Entrez le premier nombre :");
    scanf("%f", &nombre1);

    printf("Entrez le premier nombre :");
    scanf("%f", &nombre2);

    printf("Entrez le premier nombre :");
    scanf("%f", &nombre3);

    moyenne_ponderee = (nombre1 * pond1 + nombre2 * pond2 + nombre3 * pond3) / (pond1 + pond2 + pond3);

    printf("La moyenne pondérée des trois nombres est : %.2f\n", moyenne_ponderee);

    return 0;
}