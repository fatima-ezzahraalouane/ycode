#include <stdio.h>

int main(){

    int n, i;
    float somme = 0, moyenne;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int T[n];

    for(i=0; i<n; i++){
        printf("Entrez l'element %d :", i+1);
        scanf("%d", &T[i]);
        somme = somme + T[i];
    }

    moyenne = somme / n;

    printf("La moyenne des elements est : %.2f\n", moyenne);

    return 0;
}