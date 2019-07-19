#include<stdio.h>

/* printf EOF 0 or 1 */

int main()
{
    int c = getchar();
    printf("%d", c != EOF);
}