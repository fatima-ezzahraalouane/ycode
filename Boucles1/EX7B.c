#include <stdio.h>

int main(){
    int nombre, reste, inverseNombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    while (nombre != 0)
    {
        reste = nombre % 10;      
        inverseNombre = inverseNombre * 10 + reste; 
        nombre = nombre / 10;
    }

    printf("Le nombre inverse est : %d\n", inverseNombre);

    return 0;
}