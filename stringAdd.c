#include<stdio.h>
#include<string.h>


int main(){
    char str1[] = "123";
    char str2[] = "456";
    int i = strlen(str1)-1;
    int j = strlen(str2)-1;
    char result[500] = "";
    int sum,carry=0,index=0;
    while(i>=0 || j>=0 || carry){
        sum=carry;
        if(i>=0){
            sum += str1[i]-'0';
            i--;
        }
        if(j>=0){
            sum += str2[j]-'0';
            j--;
        }
        result[index++] = sum%10+'0';
        carry = sum/10;
    }
    result[index] = '\0';
    //reversing the string
    for(int i=0;i<strlen(result)/2;i++){
        char temp = result[i];
        result[i] = result[strlen(result)-1-i];
        result[strlen(result)-1-i] = temp;
    }
    printf("%s",result);

    return 0;
}