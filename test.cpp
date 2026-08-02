#include <iostream>
//#include<vector>
#include <string>
// #include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    string str;cin>>str;
    while (t--)
    {
        for(int i=0; i<n; ){
            if(str[i] == 'B' && str[i+1] == 'G'){
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
                i += 2;
            }
            else{
                i++;
            }
        }
    }
    cout<<str;
    
}