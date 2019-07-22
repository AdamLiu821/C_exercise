#include<stdio.h>

int copyToArrayPlusNweLine(char inputArray[], char outputArray[], int wordNumber, int point);

int main(){
    int c;
    int count = 0;
    char word[1000];
    char output[1000];
    int nowPoint = 0;

    for (int i = 0; i <= 1000; i++) {
        output[i] = 'p';
    }

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            word[count] = c;
            count++;
        }
        else
        {
            if (count >= 10)
            {
                nowPoint = copyToArrayPlusNweLine(word, output, count, nowPoint);
            }
            count = 0;
        }
    }

    int j = 0;

    while (output[j] != 'p') {
        printf("%c", word[j]);
        j++;
    }

    return 0;
}

int copyToArrayPlusNweLine(char inputArray[], char outputArray[], int wordLong, int startPoint){
    for (int i = startPoint; i <= (startPoint +  wordLong); i++) {
        outputArray[i] = inputArray[i];
    }
    int point = startPoint + wordLong;
    outputArray[point + 1] = 'z';
    printf("%d", point + 1);
    return point + 1;
}