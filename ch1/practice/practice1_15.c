#include <stdio.h>

float tempCToF(int);

int main(){
    int low;
    int hight = 100;
    int step = 5;
    for (low = 0; low <= hight; low = low + step){
        printf("%5d C = %5.1f F\n", low, tempCToF(low));
    }
}
float tempCToF(int c){
    int f = 0;
    f = (c * 9.0 / 5.0) + 32.0;
    return f;
}