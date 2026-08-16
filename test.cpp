#include <iostream>
#include<vector>
//#include <string>
//#include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
#include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define vi vector<int>

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vi v(n);
        for(codn0(n)){
            cin>>v[i];
            
        }

        map<int,int> mp;
        
        for(codn0(n)){
            mp[v[i]]++;
        }

        int maxFreq = 0;
        int maxElement;

        for(auto x:mp){
            if(x.second > maxFreq){
                maxFreq = x.second;
                maxElement = x.first;
            }
        }
        
        int other = n - maxFreq;

        int osum = 0;
        for(codn0(n)){
           // if(v[i] == maxElement) continue;
            osum += v[i];
        }
        if(maxFreq > 1){
            osum -= maxFreq * maxElement;
            cout<<osum + min(maxFreq,other+2) * maxElement<<endl;
            
        } 
        else cout<<osum<<endl;


        
    }
    
    
}