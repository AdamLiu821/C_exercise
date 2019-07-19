#include<stdio.h>
/*print F-C table for 0, 20, 40, 60, ...,  300*/
main()
{
    float f, c;
    int lower, upper, step;

    upper = 300; //upper limit
    lower = 0;   //lower limit for f-c table
    step = 20;   //step size

    f = lower;
    while(f <= upper){
        c = 5.0 * (f -  32.0) / 9.0;
        printf("%3.0f\t%9.5f\n", f, c);
        f = f + step;
    }
}