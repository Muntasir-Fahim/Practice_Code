#include <iostream>

using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        int flag=0;
        for(int j=0;j<10;j++){
            if(j==i)continue;;
            for(int k=j+1;k<10;k++){
                if(k==i)continue;;
                if(arr[k]+arr[j]==arr[i]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}