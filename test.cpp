#include <iostream>
#include <string>
#include <algorithm>        
#include<vector>
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
    
    int maxindex = max_element(v.begin(),v.end())-v.begin();
    int swap = maxindex;
    int minindex = min_element(v.begin(),v.end()) - v.begin();
    
    for(int i = minindex+1;i<n;i++){
        if(v[i] == v[minindex]){
            minindex = i;
        }
    }
    //cout<<maxindex<<" "<<minindex<<endl;
    if(maxindex < minindex){
        swap += n-1-minindex;
    }
    else{
        swap += n-2-minindex;
    }
    cout<<swap;

    
    return 0;
}