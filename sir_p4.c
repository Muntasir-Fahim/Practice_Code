#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return(*(int *)a - *(int *)b);
}

int main(){
    int n;scanf("%d",&n);
    int len = log10(n)+1;
    int arr[len];
    int i=0;
    while (n!=0)
    {
        arr[i] = n%10;
        n/=10;
        i++;

    }
    qsort(arr,len,sizeof(int),comp);
    int count=1;
    for(int i=1;i<len;i++){
        if(arr[i]!=arr[i-1]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}