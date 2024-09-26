#include <stdio.h>

int main(){
    int n, i=1, somme;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    do
    {
        somme = somme + i;
        i++;
    } while (i<=n);

    printf("La somme des %d premiers entiers est %d\n",n, somme);

    return 0;
}