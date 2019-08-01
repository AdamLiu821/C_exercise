#include<stdio.h>

int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if(x > v[mid])
        low = mid + 1;
        else
            return mid;
    }
    return -1;
}


int main(){
    int x[] = {1, 1, 10, 20, 26, 38, 47, 49, 55, 56, 63, 72};
    printf("%d", binsearch(72, x, 12));
}