#include<stdio.h>
#include<stdlib.h>

void hide(char s[], int n);
void inverse(char s[], int n);

int main(){
    char s[] = "asdfzxc\tasdfasdf\nsasdf";
    char i[] = "asdfzxc\\tasdfasdf\\nsasdf";
    printf("%s\n\n", s);
    hide(s, 22);
    inverse(i, 24);
}

void hide(char s[], int n){
    int j;
    int newarraylength = n;

    for (int k = 0; k < n; k++){
        if(s[k] == '\t' || s[k] == '\n')
            newarraylength++;
    }

    char a[newarraylength];

    for (int i = j = 0; i < n; i++){
        switch(s[i]){
            case '\t':
                a[j] = '\\';
                j++;
                a[j] = 't';
                break;
            case '\n':
                a[j] = '\\';
                j++;
                a[j] = 'n';
                break;
            default:
                a[j] = s[i];
                break;
        }
        j++;
    }
    printf("%s\n\n", a);
}

void inverse(char s[], int n){
    int j;
    int newarraylength = n;

    for (int k = 0; k < n; k++){
        if(s[k] == '\\' && s[k + 1] == 't')
            newarraylength--;
        if(s[k] == '\\' && s[k + 1] == 'n')
            newarraylength--;
    }

    char a[newarraylength];

    for (int i = j = 0; i < n; i++){
        switch(s[i]){
            case '\\':
                if(s[i + 1] == 't'){
                    a[j] = '\t';
                    i++;
                }
                else if(s[i + 1] == 'n'){
                    a[j] = '\n';
                    i++;
                }
                else
                    a[j] = s[i];
                break;
            default:
                a[j] = s[i];
                break;
        }
        j++;
    }
    printf("%s\n\n", a);
}