#include <stdio.h>

//program that counts blanks, tabs and newlines

int main(){
    int count, c;
    
    count = 0;
    while((c = getchar()) != EOF){
        if (c == '\n' || c == ' ' || c == '   ')
            ++count;
    }
    printf("%d\n", count);
    return 0;
}