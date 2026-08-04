#include <iostream>
#include<vector>
//#include <string>
#include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

//#define endl '\n'

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while (t--)
    {
        vector<int> v(3);
        for(int i=0; i<3; i++){
            cin>>v[i];
        }
        int cnt = 0;
        while(v[0] != v[1] && v[0] != v[2] && v[1] != v[2]){
            sort(v.begin(),v.end());
            v[0] += 1;
            v[2] -= 1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    
    
}