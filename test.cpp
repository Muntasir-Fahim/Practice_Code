#include<bits/stdc++.h>
// #include <iostream>
// #include<vector>
// //#include <string>
// #include <algorithm>        
// #include<set>
// // #include<list>
// // #include<unordered_map>
// #include<map>

using namespace std;

#define endl '\n'
#define codn0(x) int i=0; i<(x); i++
#define codn1(x) int i=1; i<(x); i++
#define codn1e(x) int i=1; i<=(x); i++
#define vi vector<int>
#define vll vector<long long>

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int highest,t;
    cin>>highest>>t;
    // vector<int> freq(3000000,0);
    vector<pair<int,bool>> order;
    vector<vector<int>>appTrack(highest+1);
    int unread = 0;
    int last3 = 0;
    while (t--)
    {
        int instruction, app;
        cin>>instruction>>app;
        if(instruction == 1){
            //freq[app]++;
            appTrack[app].push_back(order.size());
            order.push_back({app,false});
            unread++;
        }
        else if(instruction == 2){
            //freq[app] = 0;
            for(auto u : appTrack[app]){
                if(order[u].first == app && !order[u].second) {
                    order[u].second = true;
                    unread--;
                }
            }
            appTrack[app].clear();
            // for(int i=0; i<(int)order.size(); i++){
            //     if(order[i].first == app && !order[i].second) {
            //         order[i].second = true;
            //         unread--;
            //     }
            // }
        }
        else{
            while (last3 < app)
            {
                if(order[last3].second == false) {
                    // freq[order[i].first]=0;
                    order[last3].second=true;
                    unread--;
                }
                last3++;
            }
            
        }

        // int cnt=0;
        // for(auto u: order){
        //     if(u.second == false) cnt++;
        // }
        cout<<unread<<endl;

        //cout << accumulate(freq.begin(),freq.end(),0)<<endl;



    }
    
    
}
