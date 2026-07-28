#include <iostream>
// #include <string>
// #include <algorithm>        
// #include<vector>
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

int main() 
{
    long long int n;cin>>n;
    if (n % 2 == 0) cout<<n/2;
    else cout<< -(n+1)/2;
    return 0;
}