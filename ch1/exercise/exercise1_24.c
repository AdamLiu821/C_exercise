#include<stdio.h>
#define IN  1
#define OUT 0

/*count lines words and chars in input*/

int main(){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while( (c = getchar()) != EOF){
        nc = nc + 1;
        if(c == '\n'){
            nl = nl + 1;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            nw = nw + 1;
        }
    }
    printf("%dline, %dchar, %dword", nl, nc, nw);
}