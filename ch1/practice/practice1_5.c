#include<stdio.h>

main(){
    printf("攝氏、華氏溫度對照表\n");
    int f;
    for(f = 300; f >= 0; f = f - 20){
        printf("%3d度F\t%9f度C\n", f, (f - 32) * 5.0 / 9.0);
    }
}
