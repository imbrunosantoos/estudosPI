#include <stdio.h>

typedef struct {
    int value;
    int suit;
} Card;

void imprimir_carta(Card *c){

    printf("A carta e: valor %d, naipe %d", c->value, c->suit);

}

int main(){

    Card carta;
    carta.value = 1;
    carta.suit = 2;

    imprimir_carta(&carta);

    return 0;
}