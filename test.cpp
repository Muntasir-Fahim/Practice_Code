#include <iostream>
//#include<vector>
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
    
    string s;
    //cin>>s;
    getline(cin,s);
    int len = s.length();

    int seen[256] ={0};

    for(int i=1; i<len-1; i += 3){
        seen[s[i]]++;
    }
    
    
    int dist = 0;

    for(codn0(256)){
        if(seen[i] != 0) dist++;
    }

    cout<<dist;

}
