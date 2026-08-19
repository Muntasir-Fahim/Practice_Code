#include <iostream>
#include<vector>
#include <string>
//#include <algorithm>        
//#include<set>
// #include<list>
// #include<unordered_map>
//#include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define codn1e(x) int i=1; i<=(x); i++
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
    int cnt=0,man=0;
    for(codn0(n)){
        if(v[i] > 0){
            man += v[i];
        }else{
            if(man == 0) cnt++;
            else man += v[i];
        }
    }
    cout<<cnt;

}
