#include <stdio.h>

void Fibfunc(int n) {

    if(n < 1) {
        printf("Entrer nombre valide");
        return; 
    }
<<<<<<< HEAD

    int Fib1 = 0;
    int Fib2 = 1;

    for(int i = 0; i <= n; i++) {
            printf("%d\n", Fib1);
            int nombreactulle = Fib1 + Fib2;
            Fib1 = Fib2;
            Fib2 = nombreactulle;
    } 
=======
    return nombre;
>>>>>>> 703076773eabcc8d45a77f5d6e32587a63712b05
}

int main() {
    int n;

<<<<<<< HEAD
    printf("Entrer un entier: ");
    scanf("%d", &n);
    Fibfunc(n);

    return 0;
}   
=======
    printf("Entrez un entier: ");
    scanf("%d", &nombre);

    Pair(nombre);

    return 0;
}
>>>>>>> 703076773eabcc8d45a77f5d6e32587a63712b05
