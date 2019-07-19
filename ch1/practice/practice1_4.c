#include<stdio.h>
/*print F-C table for 0, 20, 40, 60, ...,  300*/
main()
{
    int c;
    float f;
    int lower, upper, step;

    upper = 100; //upper limit
    lower = 0;   //lower limit for f-c table
    step = 3;   //step size

    c = lower;

    printf("\n攝氏轉華氏溫度表\n\n");

    while(c <= upper){
        f = c * 9.0 / 5.0 + 32.0;
        printf("%3d\t%9.2f\n", c, f);
        c = c + step;
    }
}