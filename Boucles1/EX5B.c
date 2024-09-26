#include <stdio.h>

int main(){
    int x, y, i=1;
    int resultat = 1;

    printf("Entrez le premier nombre : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);

    while (i<=y)
    {
        resultat = resultat * x;
        i++;
    }

    printf("Le resultat est : %d ^ %d = %d",x, y, resultat);

    return 0;

}