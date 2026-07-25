#include<stdio.h>
#include<stdlib.h>


int main(){
    int one[5]={2,6,7,8,11};
    int two[4]={1,3,4,5};
    // int one[5]={1,2,3,4,5};
    // int two[5]={6,7,8,9,10};
    int sorted[10];
    int i=0,j=0,k=0;
    while(i<5 && j<4){
        if(one[i]<two[j]){
            sorted[k] = one[i];
            i++;
            
        }
        else{
            sorted[k] = two[j];
            j++;
        }
        k++;
    }
    while(i<5){
        sorted[k] = one[i];
        i++;k++;
    }
    while(j<4){
        sorted[k] = two[j];
        j++;k++;
    }
    for(int i=0;i<9;i++){
        printf("%d ",sorted[i]);
    }
    return 0;
}