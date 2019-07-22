#include<stdio.h>

#define MAXLINE 1000

int main(){
    char line[MAXLINE];
    int c;
    int count = 0;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            line[count] = ' ';
        }
        else {
            line[count] = c;
        }
        count++;
    }

    line[count] = '\0';

    printf("%s", line);
}