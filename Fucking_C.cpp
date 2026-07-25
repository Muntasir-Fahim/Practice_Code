#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,k,count = 0;
    cin>>n>>m>>k;
    vector<int> app;
    vector<int> apart;
    //int app[n],apart[m];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        app.push_back(x);
    }
    
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        apart.push_back(x);
    }
    sort(apart.begin(),apart.end());
    sort(app.begin(),app.end());
    
    int i=0,j=0;
    while (i!=app.size()&&j!=apart.size()){
        if(app[i] - apart[j] <= k && app[i] - apart[j] >=-k){
            i++;j++;count++;
        }
        else if(app[i]<apart[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count;
}
