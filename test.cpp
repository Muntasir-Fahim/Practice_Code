#include <iostream>
#include<vector>
//#include <string>
#include <algorithm>        
#include<set>
// #include<list>
// #include<unordered_map>
#include<map>

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
    
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n);
        for(codn0(n)){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        int len = v.size();
        int cnt=1;
        int res = 1;
        for(int i=1; i<len; i++){
            if(v[i] == v[i-1]+1) {
                //cout<<i<<" ";
                cnt++;
            }
            else{
                cnt = 1;
            }
            res = max(res,cnt);
            //cout<<cnt<<" "<<res<<endl;
        }
        cout<<res<<endl;
    }
    
}
