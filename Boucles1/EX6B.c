#include <stdio.h>

int main(){
    int n,i=1;
    int pair = 2;

    printf("Entez un nombre entier : ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("%d ", pair);
        pair = pair + 2;
        i++;
    }

    return 0;
    
}