#include <stdlib.h>
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n){
    return x ^ (~(~0 << n) << (p + 1 - n));
}

int main(){
    unsigned x;
    int n, p;
    x = 0b11110;
    p = 4;
    n = 3;
    printf("init value: x: %d\n", x);
    printf("invert result: %d\n", invert(x, p, n));
}