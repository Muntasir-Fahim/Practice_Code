#include <iostream>
#include<vector>
#include <string>
//#include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
//#include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define vi vector<int>

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    int len = a.length();
    for(codn0(len)){
        if(a[i] == b[i]) cout<<"0";
        else cout<<"1";
    }

        
    
    
    
}