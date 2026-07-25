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
    int t;cin>>t;
    while(t--){
        string str; 
        cin>>str;
        vector<int>cap;
        vector<int>sml;
        for(int i=0;i<str.length();i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                if(str[i] == 'b'){
                    if(sml.size()!=0)
                        sml.pop_back();
                }
                else
                    sml.push_back(i);
            }
            else{
                if(str[i] == 'B'){
                    if(cap.size()!=0)
                        cap.pop_back();
                }
                else
                    cap.push_back(i);
            }
        }
        int len = str.length();
        bool flag[len] = {false};
        for(int i=0;i<cap.size();i++){
            flag[cap[i]] = true; 
        }
        for(int i=0;i<sml.size();i++){
            flag[sml[i]] = true; 
        }
        for(int i=0;i<len;i++){
            if(flag[i] == true){
                cout<<str[i];
            }
        }
        
        cout<<endl;
    }
    

    
    return 0;
}