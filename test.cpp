#include <iostream>
#include<vector>
//#include <string>
//#include <algorithm>        
//#include<set>
// #include<list>
// #include<unordered_map>
//#include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define vi vector<int>
#define vll vector<long long>

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;

    vi v(n);
    for(codn0(n)){
        cin>>v[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(v[j] == i) cout<<j+1<<" ";
        }
    }

}
