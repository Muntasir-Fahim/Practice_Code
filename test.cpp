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
#define codn1e(x) int i=1; i<=(x); i++
#define vi vector<int>
#define vll vector<long long>

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,d,n,cnt = 0;
    cin>>a>>b>>c>>d>>n;
    for(codn1e(n)){
        if(i % a == 0) continue;
        else if(i % b == 0) continue;
        else if(i % c == 0) continue;
        else if(i % d == 0) continue;
        else cnt++;
    }

    cout<<n - cnt;

}
