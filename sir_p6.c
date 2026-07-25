#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch[] = "a2b5c3d5";
    //printf("%s",ch);
    for(int i=1;i<strlen(ch);i+=2){
        for(int j=0;j<(ch[i]-'0');j++){
            printf("%c",ch[i-1]);
        }
    }
    return 0;
}