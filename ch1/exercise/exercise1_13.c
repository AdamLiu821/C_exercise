#include<stdio.h>

main()
{
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d\t%15.5f\n", fahr, (fahr - 32) * 5.0 / 9.0);
    }
}