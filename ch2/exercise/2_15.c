#include<stdio.h>

int lower(int c);
int lower(int c){
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c - 'a' + 'A';
}

int main(){
    int c;
    while((c = getchar()) != EOF){
        printf("%c", lower(c));
    }
}