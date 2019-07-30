#include <stdlib.h>
#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

unsigned setbits(unsigned x, int p, int n, unsigned y){
    return( (y >> n << n) | ((x >> (p + 1 - n)) & ~(~0 << n)) );
}

int main(){
    unsigned x = 0b1001010;
    unsigned y = 0b1011;
    printf("%d", setbits(x, 2, 2, y));
}