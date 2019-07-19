#include<stdio.h>                           //把stdio.h檔案包括進來

main()                                      //主程式main()函數
                                            //main沒有引數所以()中間沒有東西
{                                           //函數中所有指述要用{}大括號包起來
    printf("hello, world!\n");              //call printf()這個function用來將字串輸出到螢幕上
                                            //""中間的文字是字串 \n 是換行
    printf("hello, ");
    printf("world!");
    printf("\n");
}