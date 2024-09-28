#include <stdio.h>

int Pair(int nombre){
    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

}

int main(){
    int nombre;

    printf("Entrez un entier: ");
    scanf("%d", &nombre);

    
    printf("%d! = %d\n", nombre, Pair(nombre));

    return 0;
}