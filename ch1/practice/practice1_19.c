#include <stdio.h>

#define MAXLINE 1000

void reverse(char input[], char output[], int stringLong);

int main(){
    char line[MAXLINE];
    char outputline[MAXLINE];
    int count = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            line[count] = c;
            count++;
        }
        else {
            reverse(line, outputline, count);
            printf("%s\n", outputline);
            printf("%d\n", count);
            count = 0;
            for (int i = 0; i <= MAXLINE; i++) {
                line[i] = '\0';
                outputline[i] = '\0';
            }
        }
    }
}

void reverse(char input[], char output[], int stringLong){
    for (int i = 0; i < stringLong; i++){
        output[stringLong - i - 1] = input[i];
    }
}