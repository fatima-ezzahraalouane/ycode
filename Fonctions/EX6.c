#include <stdio.h>

void Fibfunc(int n) {

    if(n < 1) {
        printf("Entrer nombre valide");
        return; 
    }

    int Fib1 = 0;
    int Fib2 = 1;

    for(int i = 0; i <= n; i++) {
            printf("%d\n", Fib1);
            int nombreactulle = Fib1 + Fib2;
            Fib1 = Fib2;
            Fib2 = nombreactulle;
    } 
}

int main() {
    int n;

    printf("Entrer un entier: ");
    scanf("%d", &n);
    Fibfunc(n);

    return 0;
}   