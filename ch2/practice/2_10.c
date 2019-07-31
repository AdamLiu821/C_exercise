#include<stdlib.h>
#include<stdio.h>

int lower(int c);
int lower(int c){
    return (c >= 'A' && c <= 'Z')?(c - 'A' + 'a'):(c - 'a' + 'A');
}

int main(){
    int c;
    while((c = getchar()) != EOF){
        printf("%c", lower(c));
    }
}