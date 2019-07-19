#include<stdio.h>

/*transform   tab to \t    back to \b    \ to \\ */

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("'\\t'");
        }
        else if(c == '\b'){
            printf("'\\b'");
        }
        else if(c == '\\'){
            printf("'\\\\'");
        }
        else{
            putchar(c);
        }
    }
}