#include <stdio.h>
#include <math.h>

 int main(){
    double a, b, c;
    double moyenne_geometrique;

    printf("Entrez la premiere nombre :");
    scanf("%lf", &a);

    printf("Entrez la deuxieme nombre :");
    scanf("%lf", &b);

    printf("Entrez la troisieme nombre :");
    scanf("%lf", &c);

    moyenne_geometrique = pow(a * b * c, 1.0/3.0);

    printf("La moyenne geometrique de trois nombres %.2lf, %.2lf, %.2lf est : %.2lf", a, b, c, moyenne_geometrique);

    return 0;

 }