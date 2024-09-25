#include <stdio.h>

int main(){
    int n, i;
    int facto=1;

    printf("Entrez un nombre entier positif :");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        facto = facto * i;
    }
    printf("%d! = %d\n", n, facto);

    return 0;
}