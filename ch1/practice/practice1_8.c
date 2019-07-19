#include <stdio.h>

/*count \n \t ' ' numbers*/

int main(){
    int c;
    int white = 0;
    int tab = 0;
    int newline = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            white++;
        }
        if(c == '\t'){
            tab++;
        }
        if(c == '\n'){
            newline++;
        }
    }
    printf("%d\n%d\n%d\n", white, tab, newline);
}