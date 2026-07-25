#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int four = count(v.begin(),v.end(),4);
    int three = count(v.begin(),v.end(),3);
    int two = count(v.begin(),v.end(),2);
    int one = count(v.begin(),v.end(),1);

    int taxi = four;
    //pair 3 and 1
    int pair = min(three,one);
    taxi += pair;
    three -= pair;
    one -= pair;

    //left three
    taxi += three;

    //two and one
    taxi += two/2;
    two = two%2;

    if(two == 1){
        taxi++;
        one = max(0,one-2);
    }
    one = ceil((float)one/4);
    taxi += one;
    cout<<taxi;
    
}