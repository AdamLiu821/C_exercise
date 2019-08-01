#include <ctype.h>
#include <stdio.h>

int atoi(char s[]){
    int i, n, sign;
    n = 0;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if(s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}

int main(){
    char s[] = "-84   6";
    printf("%d", atoi(s));
}