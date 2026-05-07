#include <stdio.h>
#include <listas.h>

/*Give a non-recursive definition of the function void appendL (LInt *, int) which adds an element
to the end of the list*/

void appendL(LInt *l, int new){
   LInt novo = malloc(sizeof(struct lligada));

   novo -> valor = new;
   novo -> prox = NULL;

    if (*l == NULL){
        *l = novo;  
    }
    else{
        LInt temp = *l;

        while (temp ->prox != NULL){
            temp = temp ->prox;
        }
        temp ->prox = novo;
    }
}