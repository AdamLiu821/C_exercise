#include <stdio.h>
#include <string.h>

#define MAX 1000


void expand(char s1[], char s2[]);

void expand(char s1[], char s2[]){
    int count = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] == '-'){
            if(s1[i - 1] >= 'a' && s1[i - 1] <= 'z' && s1[i + 1] >= 'a' && s1[i + 1] <= 'z'){
                for (int j = 0; j < s1[i + 1] - s1[i - 1]; j++){
                    s2[count + j] = s1[i - 1] + 1 + j;
                    //("%c", s1[i - 1] + j);
                }
                count = count + s1[i + 1] - s1[i - 1];
                i++;
            }
            if(s1[i - 1] >= '0' && s1[i - 1] <= '9' && s1[i + 1] >= '0' && s1[i + 1] <= '9'){
                for (int k = 0; k < s1[i + 1] - s1[i - 1]; k++){
                    s2[count + k] = s1[i - 1] + 1 + k;
                }
                count = count + s1[i + 1] - s1[i - 1];
                i++;
            }
        }   
        else{
            s2[count] = s1[i];
            count++;
        }
    }
}

int main(){
    char s_before[] = "a-k-k";
    char s_after[MAX];
    expand(s_before, s_after);
    printf("%s", s_after);
}