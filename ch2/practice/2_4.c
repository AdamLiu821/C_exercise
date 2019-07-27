#include <stdio.h>

void squeeze(char s[], char c[]);

int main(){
    char input[] = "asdfhjklcccasdhfcccasdd";
    char delete[] = "das";
    squeeze(input, delete);
    printf("%s", input);
}

void squeeze(char s[], char c[]){
    int i, j;
    int k = 0;
    int get = 0;
    for (i = 0; s[i] != '\0'; i++){
        for (j = 0; j < strlen(c); j++){
            if (s[i] == c[j]){
                get = 1;
                break;
            }
        }
        if(get == 1){
            get = 0;
        }
        else{
            s[k] = s[i];
            k++;
        }
    }
    s[k] = '\0';
}