#include <stdio.h>

int squeeze(char s[], char c[]);

int main(){
    char input[] = "fhjklccchfcccqerupwqureiopqwuerpo";
    char search[] = "161654321543";
    printf("%d", squeeze(input, search));
}

int squeeze(char s[], char c[]){
    int i, j;
    int get = 0;
    for (i = 0; s[i] != '\0'; i++){
        for (j = 0; j < strlen(c); j++){
            if (s[i] == c[j]){
                get = 1;
                break;
            }
        }
        if(get == 1){
            break;
        }
    }
    if(s[i] == '\0'){
        i = -1;
    }
    else{
        i++;
    }
    return i;
}