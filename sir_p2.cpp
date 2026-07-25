#include <iostream>

using namespace std;

int main() {
    int arr[10]={1,2,12,4,5,6,7,8,9,10};
    int l=0,r=9;
    while(l<r){
        while(l<r && arr[l]%2==0){
            l++;
        }
        while(l<r && arr[r]%2==1){
            r--;
        }
        //swap
        if(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}