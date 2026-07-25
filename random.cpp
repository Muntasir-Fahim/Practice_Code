#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
 
using namespace std;
 
int main() {
    int n;cin>>n;
    vector<int> v(n);
    int taxi;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j] == 4){
                v[j] = 0;
                break;
            }
        }
    }
    int zero = count(v.begin(),v.end(),0);
    cout<<v.size()-zero;

}
    