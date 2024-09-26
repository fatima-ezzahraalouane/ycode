#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Le caractère '%c' est une voyelle.\n", caractere);
            break;
        default:
            printf("Le caractère '%c' n'est pas une voyelle.\n", caractere);
    }

    return 0;
}
