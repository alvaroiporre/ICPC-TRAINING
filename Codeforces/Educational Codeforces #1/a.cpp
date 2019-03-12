#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll r=n*(n+1)/2;
        ll p=log2(n)+1;
        r-=2LL*((1LL<<p)-1);
        cout<<r<<endl;
    }

    return 0;
}
