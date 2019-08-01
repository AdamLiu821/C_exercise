#include<stdio.h>
#include<stdlib.h>

void shellsort(int v[], int n);

void shellsort(int v[], int n){
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap){
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

int main(){
    int s[] = {1, 5, 76, 49, 8, 6, 15, 5};
    shellsort(s, 8);
    for (int i = 0; i < 8; i++){
        printf("%d\t", s[i]);
    }
}