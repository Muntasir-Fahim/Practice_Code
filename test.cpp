#include <iostream>
//#include<vector>
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

    int t;cin>>t;
    int cnt = 0;
    while(t--){
        int a,b;cin>>a>>b;
        if(b-a >= 2) cnt++;
    }

    cout<<cnt;
        
    
    
    
}
