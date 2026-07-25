#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkPalindrome(char *p, int start, int end){
    if(start >= end){
        return 1;
    }
    if(p[start] != p[end]){
        return 0;
    }
    return checkPalindrome(p, start+1,end-1);
}

int main(){
    char str[100] = "hello";

    int len = strlen(str);
    if(checkPalindrome(str,0,len-1)){
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    
    return 0;
}