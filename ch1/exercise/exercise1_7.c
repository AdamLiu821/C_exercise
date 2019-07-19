#include<stdio.h>
/*print F-C table for 0, 20, 40, 60, ...,  300*/
main()
{
    int f, c;
    int lower, upper, step;
    upper = 300; //upper limit
    lower = 0;   //lower limit for f-c table
    step = 20;   //step size
    f = lower;
    while(f <= upper){
        c = 5 * (f -  32) / 9;
        printf("%6d\t%9d\n", f, c);
        f = f + step;
    }
}