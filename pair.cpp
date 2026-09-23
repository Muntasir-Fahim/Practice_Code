#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define codn1e(x) int i=1; i<=(x); i++
#define vi vector<int>
#define vll vector<long long>

bool cmp(pair<int,int> &l, pair<int,int> &r){
    if(l.first < r.first) return true;
    else if (l.first == r.first)
    {
        if(l.second > r.second) return true;
        else return false;
    }
    else return false;
    
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    vector<pair<int,int>>vp;
    int len = s.length();
    int balance = 0;
    for(codn0(len)){
        vp.push_back({balance,i});
        if(s[i] == '(') balance+=1;
        else balance -=1;
    }

    sort(vp.begin(),vp.end(),cmp);
    for(auto u: vp){
        cout<<s[u.second];
    }
    
}
