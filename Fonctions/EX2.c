#include <stdio.h>

int Multi(int a, int b){
    int resultat ;
    resultat = a * b;
    return resultat;
}

int main (){
    int x, y;
    int resul;

    printf("Entrer la valeur de x : ");
    scanf("%d", &x);

    printf("Entrer la valeur de y : ");
    scanf("%d", &y);

    resul = Multi(x, y);

    printf("Multiplication est : %d", resul);

    return 0;
}