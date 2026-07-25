#include <iostream>

using namespace std;

int main() {
    int arr[10]={-1,-2,12,-4,5,6,7,-8,9,10};
    //neg-pos swap
    int l=0,r=9; 
    while (l<r)
    {
        while (l<r && arr[l]<0){
            l++;
        }
        while (l<r && arr[r]>0){
            r--;
        }
        //swaping
        if(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
        }
    }
    //even-odd swapping
    int left=l,right=9;
    while (left<right)
    {
        while (left<right && arr[left]%2==0){
            left++;
        }
        while (left<right && arr[right]%2==1){
            right--;
        }
        //swaping
        if(left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    //printing
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    // return 0;
}