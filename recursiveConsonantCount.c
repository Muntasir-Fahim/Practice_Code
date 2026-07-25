#include<stdio.h>
#include<stdlib.h>

int constcnt(char *p, int i){
    if(p[i] == '\0'){
        return 0;
    }
    if(!(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == ' ')){
        return 1 + constcnt(p,i+1);
    }
    return constcnt(p,i+1);
}

int main(){
    char ch[] = "hell world";
    printf("%d",constcnt(ch,0));

    return 0;
}