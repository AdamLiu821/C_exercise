#include<stdio.h>

main(){
    printf("���B�ؤ�ū׹�Ӫ�\n");
    int f;
    for(f = 300; f >= 0; f = f - 20){
        printf("%3d��F\t%9f��C\n", f, (f - 32) * 5.0 / 9.0);
    }
}
