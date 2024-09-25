#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14;
    double r;
    double volume;

    printf("Entrez le rayon de la sphere :");
    scanf("%lf", &r);

    volume = pow(r, 3) * PI * (4.0/3.0);

    printf("Le volume d'une sphere est : %.2lf", volume);

    return 0;
}