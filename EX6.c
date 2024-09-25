#include <stdio.h>

int main(){
    double a, b;

    printf("Entrez la premiere nombre :");
    scanf("%lf", &a);

    printf("Entez la deuxieme nombre :");
    scanf("%lf", &b);

    printf("Affichage des resultats :\n");
    printf("a + b = %lf\n", a + b);
    printf("a - b = %lf\n", a - b);
    printf("a * b = %lf\n", a * b);

    if(b>0)
    {
        printf("a / b = %.2lf", a/b);
    }
    else
        printf("Impossible de diviser sur 0");
    
    return 0;
}