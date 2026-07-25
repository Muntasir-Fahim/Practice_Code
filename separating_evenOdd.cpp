#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,10,9};
    int even[10]={0},odd[10]={0};
    int i=0,j=0,k=0;
    while(i<10){
        if(arr[i]%2==0){
            even[j]=arr[i];
            //cout<<"*";
            j++;
        }
        else if(arr[i]%2==1){
            odd[k]=arr[i];
            k++;
        }
        i++;
    }
    for(int i=0;i<5;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<odd[i]<<" ";
    }
    
    
    return 0;
}