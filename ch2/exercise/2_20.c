#include <stdio.h>

void squeeze(char s[], int c);
void stract(char s[], char t[]);

int main(){
    char input[] = "asdfhjklcccasdhfcccasdd";
    char copy[] = "000000000000000000";
    stract(input, copy);
    //squeeze(input, 'c');
    printf("%s", input);
}

void squeeze(char s[], int c){
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++){
        if(s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void stract(char s[], char t[]){
    int i, j;
    i = j = 0;
    while(s[i] != '\0'){
        i++;
    }
    while((s[i++] = t[j++]) != '\0'){

    }
}