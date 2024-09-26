#include <stdio.h>

int main(){
    int n, i;
    int somme=0;

    printf("Entrez le nombre des elements : ");
    scanf("%d", &n);

    int T[n];

    for(i=0; i<n; i++){
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &T[i]);
        somme = somme + T[i];
    }

    printf("La somme totale est : %d", somme);

    return 0;
}