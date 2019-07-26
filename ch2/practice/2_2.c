#include <stdio.h>

#define MAX 10

int main(){
    char s[MAX];
    int c;
    int i = 0;
    while((c = getchar()) != EOF){
        if(c != '\n'){
            if(i < MAX){
                s[i] = c;
                i++;
            }
            else{
                printf("over length\n");
                int j = 0;
                while(s[j] != '\0'){
                    s[j] = '\0';
                    j++;
                }
            }
        }
        else{
            s[i] = '\0';
            printf("%s\n", s);
            int j = 0;
            while(s[j] != '\0'){
                s[j] = '\0';
                j++;
            }
            i = 0;
        }
    }
    return 0;
}