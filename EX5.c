#include <stdio.h>
#include <math.h>

int main(){
    float C;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &C);

    if (C<0)
    {
        printf("L'etat de l'eau a cette temperature est solide.\n");   
    }

    else if (C >= 0 && C < 100)
    {
        printf("L'etat de l'eau a cette temperature est liquide.\n");
    }
    
    else if (C >= 100)
    {
        printf("L'etat de l'eau a cette temperature est gaz.\n");
    }
    
    return 0;
}