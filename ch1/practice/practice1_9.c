#include<stdio.h>

/*copy and transform '       ' to ' ' */

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar(c);
            while(c == ' '){
                c = getchar();
            }
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}