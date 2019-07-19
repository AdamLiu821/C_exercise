#include<stdio.h>

#define IN 1
#define OUT 0

/*output 1 word for 1 line*/   

int main(){
    int c;
    int state = OUT;
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\t' && c != '\n'){
            if(state == OUT){
                printf("\n");
                state = IN;
                putchar(c);
            }
            else{
                putchar(c);
            }
        }
        else{
            state = OUT;
        }
    }
}