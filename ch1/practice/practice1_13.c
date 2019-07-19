#include<stdio.h>

/*draw picture for word long */

#define MAXHIST 5
#define MAXWORD 11 /*單字字母數上限 */
#define IN 1
#define OUT 0

int main(){
    int c, i, nc, state; /*state IN文字中 OUT文字外 */
    int len;
    int maxvalue;
    int ovflow; /*超出字母數限制的單字字數 */
    int wl[MAXWORD];

    state = OUT;
    nc = 0; /*字母長度 */
    ovflow = 0;

     /*初始化陣列 */
    for (i = 0; i < MAXWORD; i++) {
        wl[i] = 0;
    }

    /*判斷單字字數 */
    while ((c = getchar()) != EOF) {
        /*若為其他符號 判為文字外 */
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT; //文字外
            /*字母長度小於最大長度則紀錄 否則紀錄在超過中 */
            if (nc > 0) {
                if (nc < MAXWORD)
                    wl[nc]++;
                else
                    ovflow++;
                nc = 0;
            }
        }
        /*若非其他符號 但原本狀態為OUT 表示偵測到開頭字母 狀態改為IN 字母數設為1 */
        else if (state == OUT) {
            state = IN;
            nc = 1;
        }
        /*非其他符號 狀態為IN 表示為連續字母 字母數+1 */
        else {
            nc++;
        }
    }
    
    maxvalue = 0; 

    for (i = 1; i < MAXWORD; i++) {
        if (wl[i] > maxvalue)
            maxvalue = wl[i];
    }

    for (i = 1; i < MAXWORD; i++) {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0) {
            if((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        } else {
            len = 0;
        }

        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }

    if (ovflow > 0)
        printf("\ntotal %d words >= %d\n", ovflow, MAXWORD);

    getchar();
}