#include <iostream>
#include<vector>
// #include <string>
// #include <algorithm>        
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

int main() 
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int i = 0;
    int j = n-1;
    int srj = 0,dima = 0,cnt = 1;
    while (i <= j)
    {
        if(v[i] >= v[j]){
            if(cnt % 2 == 1){
                srj += v[i];
            }else{
                dima += v[i];
            }
            i++;
            cnt++;
        }else{
            if(cnt % 2 == 1){
                srj += v[j];
            }else{
                dima += v[j];
            }
            j--;
            cnt++;
        }
    }
    cout<<srj<<" "<<dima;
    
}