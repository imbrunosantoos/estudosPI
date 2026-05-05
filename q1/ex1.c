#include <stdio.h>

/*Define a program that reads (using the scanf function) a sequence of integers ending with the number
0 and prints the largest element of the sequence on the screen.*/

int main() {
    int numero, maior;
    int primeiro = 1; 

    printf(" sequencia de numeros inteiros que termine com 0:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (primeiro) {
            maior = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    if (primeiro) {
        printf("A sequencia estava vazia.\n");
    } else {
        printf("O maior elemento da sequencia e: %d\n", maior);
    }

    return 0;
}