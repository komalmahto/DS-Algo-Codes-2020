#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll prime[]={2,3,5,7,11,13,17,19};
    ll t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     ll subset=(1<<8);
     ll ans=0;
     for(ll i=1;i<subset;i++){
     ll denom=1ll;
     ll setbits=__builtin_popcount(i);
     for(ll j=0;j<=7;j++){
        if(i&(1<<j)){
            denom=denom*prime[j];
        } 
     }
     if(setbits&1){
         ans+=n/denom;
     }else{
         ans-=n/denom;
     }
     }
     cout<<ans;
    }
}