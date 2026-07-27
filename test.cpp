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
    int r,c,tst=0;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i % 2 == 0) cout<<"#";
            else if((i+1) % 4 == 0){
                if(j == 0) cout<<"#";
                else cout<<".";
            }
            else{
                if(j == c-1) cout<<"#";
                else cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}