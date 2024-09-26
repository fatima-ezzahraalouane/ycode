#include <stdio.h>

int main(){
    int n, i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int T[n];
    for(i=0; i<n; i++){
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Les element sont : ");
    for(i=0; i<n; i++){
        printf("%d ", T[i]);
    }

    return 0;
}