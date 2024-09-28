#include <stdio.h>

int Min(int a, int b){
    if(a<b){
        return a;
    }
    else
        return b;
}

int main(){
    int x, y;

    printf("Entrer la valeur de x : ");
    scanf("%d", &x);

    printf("Entrer la valeur de y : ");
    scanf("%d", &y);

    printf("Le nombre minimum est : %d", Min(x, y));

    return 0;
}