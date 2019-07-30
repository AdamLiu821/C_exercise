#include <stdio.h>

unsigned getbit(unsigned x, int p, int n);

unsigned getbit(unsigned x, int p, int n){
    return (x >> (p + 1 - n) & ~(~0 << n));
}

int main(){
    unsigned x = 0b1110;
    printf("%x", getbit(x,2,3));
}