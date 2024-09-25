#include <stdio.h>

int main(){
    int n, i;
    int somme=0;

    printf("Entrez un nombre entier :");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        somme = somme + i;
    }
    printf("La somme est : %d", somme);
    return 0;
}