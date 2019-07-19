#include<stdio.h>

/* count how many letters for string */

int main(){
    long nc;

    nc = 0;
    while(getchar() != EOF){
        ++nc;
    }
    
    printf("%ld characters\n", nc);
}