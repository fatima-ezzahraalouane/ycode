#include <stdio.h>

int main() {
    float a, b;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez la douxieme nombre : ");
    scanf("%f", &b);

    printf("Affichage des resultats \n");
    printf(" a + b = %2.f \n", a+b);
    printf(" a - b = %2.f \n", a-b);
    printf(" a * b = %2.f \n", a*b);
    if (b != 0)
    {
        printf(" a / b = %2.f \n", a/b);
    }
    else 
    {
        printf("N'est pas autorise diviser par 0 \n");
    }
    
    return 0;
}
