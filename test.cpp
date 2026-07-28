#include <iostream>
// #include <string>
// #include <algorithm>        
// #include<vector>
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

int main() 
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n <= 2) cout<<"0"<<endl;
        else if(n % 2 == 0){
            cout<<n/2-1<<endl;
        }
        else cout<<n/2<<endl;
    }
}