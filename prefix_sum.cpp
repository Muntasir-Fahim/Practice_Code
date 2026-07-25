#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,t,start,end;
    cin>>n>>t;
    vector<long long int> prefix(n+1,0);
    vector<int> arr(n);
    //int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    while (t--)
    {
        cin>>start>>end;
        cout<<prefix[end]-prefix[start-1]<<endl;
    }
    
}
