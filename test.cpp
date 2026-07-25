#include <iostream>
#include <string>
#include <algorithm>        
//#include<vector>
// #include<set>
// #include<list>
// #include<unordered_map>
// #include<map>

using namespace std;

int main() 
{
    string str1,str2,str,ref;
    cin>>str1>>str2>>ref;
    str = str1 + str2;
    sort(str.begin(),str.end());
    sort(ref.begin(),ref.end());

    if(str == ref){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}