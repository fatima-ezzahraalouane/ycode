#include <stdio.h>

int main(){
    int nombre, inverseNombre;

    printf("Entrez un nombre entier de 4 chiffres : ");
    scanf("%d", &nombre);

    inverseNombre = (nombre % 10) * 1000 +
                    (nombre / 10 % 10) * 100 +
                    (nombre / 100 %10) * 10 +
                    (nombre / 1000);
    printf("L'inverse de %d est : %d ", nombre, inverseNombre);

    return 0;
}