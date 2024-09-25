#include <stdio.h>
#include <math.h>

int main(){
    float C, K;
    printf("la temperature en Celsius : ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("la temperature en Kelvin : %.2f", K);

    return 0;
}