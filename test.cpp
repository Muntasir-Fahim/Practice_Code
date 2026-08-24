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
    
    int n,time;
    cin>>n>>time;
    int tl = 240 - time;
    int cnt = 0,sum = 0;
    for(codn1e(n)){
        sum += i*5;
        if(sum <= tl) cnt++;
    }
    cout<<cnt;

}
