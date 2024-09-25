#include <stdio.h>
#include <math.h>

int main(){
    float m_s, km_h;

    printf("Entrez la vitesse en kilometres par heure :");
    scanf("%f", &km_h);

    m_s = km_h * 0.27778;

    printf("La vitesse en metres par seconde est : %.2f", m_s);

    return 0;
}