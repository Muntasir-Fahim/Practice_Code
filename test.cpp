#include <iostream>
//#include<vector>
#include <string>
//#include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string str;
        cin>>str;
        // string cmp;
        // cmp += str[0];
        int org = 1;
        for(int i=1;i<n;i++){
            if(str[i] != str[i-1]){
                org++;
            }
        }
        //cout<<org<<" ";
        //int len = cmp.length();
        int reduc = 0;
        //cout<<cmp<<" ";
        for(codn1(n-1)){
            if(str[i-1] == str[i+1] && str[i] != str[i-1])
                reduc = max(reduc,2);
            else if(str[i-1] != str[i] && str[i] != str[i+1] && str[i-1] != str[i+1]){
                reduc = max(reduc,1);
            }
        }
        cout<<org-reduc<<endl;
        
        
    }
    
    
}