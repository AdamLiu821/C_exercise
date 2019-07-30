#include <stdio.h>

unsigned getbit(unsigned x, int p, int n);

unsigned getbit(unsigned x, int p, int n){
    return (x >> (p + 1 - n) & ~(~0 << n));
}

int main(){
    unsigned x = 15;
    printf("%x", getbit(x,1,2));
}