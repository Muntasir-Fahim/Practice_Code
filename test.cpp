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
    vector<int> v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    } 
    sort(v.begin(),v.end());
    cout<<(v[1]-v[0]) + (v[2]-v[1]);
    return 0;
}