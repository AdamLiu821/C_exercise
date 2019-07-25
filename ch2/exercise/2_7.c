#include<stdio.h>

#define LEAP 1

int main(){
    int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31];
    printf("%d\n", 31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31);

    for (int i = 0; i < 366; i++){
        days[i] = i;
    }
    
    printf("%d", days[365]);
}