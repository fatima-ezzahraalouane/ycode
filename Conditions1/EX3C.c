#include <stdio.h>

int main(){
    int a, b, somme;

    printf("Entrez la premiere valeur entiere :");
    scanf("%d", &a);

    printf("Etrez la deuxieme valeur entiere :");
    scanf("%d", &b);

    somme = a+b;

    if (a == b)
    {
        printf("Les deux valeurs sont identiques, le triple de la somme est : %d\n", 3 * somme);
    }
    
    else 
        printf("La somme des deux valeurs est : %d\n", somme);
    
    return 0;
}