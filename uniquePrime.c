#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int flag[10] = {0};
    while(num!=0){
        flag[num%10]++;
        num/=10;
    }
    for(int i=0;i<10;i++){
        if(flag[i] > 0 && (i == 2 || i == 3 || i == 5 || i == 7)){
            printf("%d ",i);
        }
    }
    
    return 0;
}