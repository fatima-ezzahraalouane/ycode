#include <stdio.h>

int main (){
    int n, i;
    int impair = 1;

    printf("Entrez un nombre entier :");
    scanf("%d", &n);

    for ( i = 0; i <=n; i++)
    {
        printf("%d ", impair);
        impair = impair + 2;
        
    }

    return 0;
    
}
