#include<stdio.h>

unsigned long int next = 5050;

int rand(void){
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed)
{
    next = seed;
}

int main(){
    srand(rand());
    printf("%lu", next);
}