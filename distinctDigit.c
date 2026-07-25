#include<stdio.h>
#include<stdlib.h>


int main(){
    int num;
    scanf("%d",&num);
    int flag[10] ={0};
    while (num != 0)
    {
        flag[num%10]++;
        num /= 10;
    }
    int cnt = 0;
    for(int i=0;i<10;i++){
        if(flag[i] != 0){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}