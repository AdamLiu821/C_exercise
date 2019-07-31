#include <stdio.h>
#include <stdlib.h>

int wordlength(void);
unsigned rightrot(unsigned x, int n);

int main(){
    printf("%d", rightrot(8, 2));
    getchar();
}

unsigned rightrot(unsigned x, int n){
    int wordlength(void);
    int rbit;
    while (n-- > 0){
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1;
        x = x | rbit;
    }
    return x;
}

int wordlength(){
    int i;
    unsigned v = (unsigned) ~0;

    for (i = 1; (v = v >> 1) > 0; i++){

    }

    return i;
}