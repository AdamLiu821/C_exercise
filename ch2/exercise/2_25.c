#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned x);
int bitcount(unsigned x){
    int b;

    for (b = 0; x != 0; x >>= 1){
        if (x & 01){
            b++;
        }
    }
    return b;
}

int main(){
    unsigned x = 10;
    printf("%d", bitcount(x));
}