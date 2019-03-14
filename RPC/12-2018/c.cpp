#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll sum(ll n){
    if(n&1)return n*((n+1)/2);
    return (n/2)*(n+1);
}
ll factorsum(ll p) {
   ll hif = sqrt(p) ;
   ll below = sum(hif) ;
   ll r = p + sum(p) - below ;
   for (ll f=2; f*f<=p; f++) {
      r += f * (p/f) ;
      if (f*f != p) {
         ll cnt = p/f ;
         r += sum(cnt) - below ;
      }
   }
   return r ;
}
int main(){
    ll a,b;
    while(cin>>a>>b){
        cout<<factorsum(b)-factorsum(a-1)<<endl;
    }
    return 0;
}
