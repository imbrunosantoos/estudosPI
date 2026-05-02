#include <stdio.h>

//a program that counts characters
int main(){
    int count=0;
    
    while(getchar() != EOF){
        ++count;
        printf("%d\n", count);
    }
}