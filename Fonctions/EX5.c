#include <stdio.h>

int Facto(int n){
    int i;
    int facto = 1;

    for(i=1; i<=n; i++){
        facto = facto * i;
    }
    return facto;

}

int main(){
    int n;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, Facto(n));

    return 0;
}