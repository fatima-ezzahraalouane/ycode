#include <stdio.h>

int main(){
    int n, i;
    int T[5] = {1, 2, 3, 4, 5};

    for(i=0; i<5; i++){
        printf("Valeur d'element %d est %d\n", i+1, T[i]);
    }

    return 0;
}