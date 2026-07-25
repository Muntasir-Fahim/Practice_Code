#include <iostream>
using namespace std;

int main() {
    int n;cin>>n;
    bool check[101] = {false};

    int p;cin>>p;
    for(int i=0;i<p;i++){
        int level;
        cin>>level;
        check[level]=true;
    }

    int q;cin>>q;
    for(int i=0;i<q;i++){
        int level;
        cin>>level;
        check[level]=true;
    }

    bool pass = true;
    for(int i=1;i<=n;i++){
        if(!check[i]){
            pass = false;
            break;
        }
    }


    if(pass){
        cout<<"I become the guy.";
    }
    else
        cout<<"Oh, my keyboard!";
    return 0;
}