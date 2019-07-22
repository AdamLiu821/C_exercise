#include<stdio.h>

#define MAXLINE 1000

int rmSpace(char line[], int maxline);

int main() {
    int c;
    int count = 0;
    char line[MAXLINE];

    while ((c = getchar()) != EOF) {
        if (c != '\n')
        {
            if (c == ' '){

            }
            else{
                line[count] = c;
                count++;
            }
        }
        else{
            line[count] = '\0';
            printf("%s\n", line);
            count = 0;
            for (int i = 0; i <= 1000; i++) {
                line[i] = '\0';
            }
        }
    }

    return 0;
}