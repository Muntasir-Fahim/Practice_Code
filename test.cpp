#include <iostream>
#include<vector>
//#include <string>
//#include <algorithm>        
#include<set>
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

    vll v(4);
    for(codn0(4)){
        cin>>v[i];
    }

    set<int> s(v.begin(),v.end());
    
    cout<<4 - s.size();
        
    
    
    
}
