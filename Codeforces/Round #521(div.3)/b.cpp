#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,k,r=0;
        cin>>a>>b>>k;
        if(k&1){
            r=a*(ll)(k/2)-b*(ll)(k/2)+a;
        }else{
            r=a*k/2-b*k/2;
        }
        cout<<r<<'\n';
    }

    return 0;
}
1
1000000 1 1000000000
