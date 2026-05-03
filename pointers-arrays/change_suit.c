#include <stdio.h>

typedef struct{
    int value;
    int suit;      
} Card;

void change_suit(Card *c, int new_suit){

    c->suit = new_suit;
}

int main(){
    Card carta;
    carta.value = 1;
    carta.suit = 2;

    printf("o valor da carta e %d e o naipe %d\n", carta.value, carta.suit);

    change_suit(&carta, 4);

    printf("o novo valor da carta e %d e o naipe %d\n", carta.value, carta.suit);

    return 0;
}