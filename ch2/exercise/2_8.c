#include<stdio.h>

int strlenn(char s[]);
int strlenn(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char text[] = "hello";
    printf("%d", strlenn(text));
}