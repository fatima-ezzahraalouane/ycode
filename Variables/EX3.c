#include <stdio.h>
#include <math.h>

int main(){
    float Km, Ya;
    printf("Entrez la distance en kilometres : ");
    scanf("%f", &Km);

    Ya = Km * 1093.61;

    printf("la distance en yards : %.2f", Ya);

    return 0;
}