#include<stdio.h>

int atoi(char s[]);

int main(){
    char test[] = "550";
    printf("%d", atoi(test) + 234);
}

int atoi(char s[]){
    int i, ans;

    ans = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++){
        ans = 10 * ans + (s[i] - '0');
        printf("%d\n", ans);
    }
    return ans;
}