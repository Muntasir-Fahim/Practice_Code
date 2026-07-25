#include<iostream>
using namespace std;

void B2D(int bin){
    int rem,ans = 0,base = 1;
    
    while (bin > 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        ans += rem*base;
        base *= 2;
    }
    cout<<ans<<endl;
}

void D2B(int dec){
    int rem, ans = 0, pow = 1;
    //cin>>dec;
    while(dec > 0){
        rem = dec % 2;
        dec = dec / 2;
        ans += (rem*pow);
        pow *= 10; 
    }
    cout<<ans<<endl;
}

int main(){
    int bin,dec;
    cin>>bin;
    B2D(bin);
    cin>>dec;
    D2B(dec);
}