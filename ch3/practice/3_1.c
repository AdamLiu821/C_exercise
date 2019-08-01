#include<stdio.h>
#include<time.h>

int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high){
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;
    else
        return -1;
}


int main(){
    clock_t start, end;
    int a;
    start = clock();
    int x[] = {1, 1, 10, 20, 26, 38, 47, 49, 55, 56, 63, 72};
    a = binsearch(72, x, 12);
    printf("%d\n", a);
    end = clock();
    double diff = ((double)(end - start));
    printf("Time = %f\n", diff);
}