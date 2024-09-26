#include <stdio.h>

int main(){
    int n, i=0;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    while (n<0)
    {
        printf("Entrez un entier positif : ");
        scanf("%d", &n);
    }

    if(n == 0){
        i = 1;
    }
    else{
        while (n != 0)
        {
            n = n / 10;
            i++;
        }
        
    }

    printf("Nombre de chiffres = %d\n",i);

    return 0;
    
}