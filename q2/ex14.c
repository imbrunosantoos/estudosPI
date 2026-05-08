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
int remove(LInt *l, int x){
    LInt anterior =  NULL;
    LInt novo = *l;
    
    while(novo != NULL && novo->valor != x){
        anterior = novo;
        novo = novo->prox;

    }
    if (novo == NULL){
        return 1;
    }
    else if(anterior == NULL){
        *l=novo->prox;
    }else{
        anterior->prox= novo->prox;
    }
    free(novo);
    return 0;

}