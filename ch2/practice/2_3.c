#include <stdio.h>

#define MAXCHAR 16;

void hoti(char s[]);

int main(){
    char input[] = "0X0010A";
    hoti(input);
}

void hoti(char s[]){
    int i = 0;
    if(s[i] == '0'){
        i++;
        if(s[i] == 'x' || s[i] == 'X'){
            int number = 0;
            int numberlen = strlen(s);
            i++;
            for (int j = 2; j < numberlen; j++){
                if (s[j] >= '0' && s[j] <= '9'){
                    number = 16 * number + (int)(s[j] - '0');
                }
                else if (s[j] >= 'a' && s[j] <= 'f'){
                    number = 16 * number + (int)(s[j] - 'a') + 10;
                }
                else if (s[j] >= 'A' && s[j] <= 'F'){
                    number = 16 * number + (int)(s[j] - 'A') + 10;
                }
                else{
                    number = -1;
                    printf("invalid input char should be \"0~9\" or \"A(a)~F(f)\"\n");
                    break;
                }
            }
            printf("result: %d", number);
        }
        else{
            printf("invalid input second shoule be \"x\" or \"X\"\n");
        }
    }
    else{
        printf("invalid input first shoule be \"0\"\n");
    }

}