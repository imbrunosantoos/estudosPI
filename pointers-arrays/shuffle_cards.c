#include <stdio.h>

typedef struct{
    int value;
    int suit;
}Card;

void shuffle_cards(Card *c1, Card *c2){

    Card temp = *c1;

    *c1 = *c2;

    *c2 = temp;

}

int main(){

    Card carta_A;
    carta_A.value=2;

    Card carta_B;
    carta_B.value=7;

    shuffle_cards(&carta_A, &carta_B);

    printf("a carta A tem o valor %d\n", carta_A.value);
    printf("a carta B tem o valor %d\n", carta_B.value);

    return 0;
}
