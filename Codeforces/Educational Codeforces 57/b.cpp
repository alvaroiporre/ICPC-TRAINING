#include<bits/stdc++.h>
#define MOD 998244353
using namespace std;
int main(){
    int n;
    cin>>n;
    string k;
    cin>>k;
    int l=1,r=1;
    for(int i=1;i<n;++i){
        if(k[i]==k[i-1])++l;
        else break;
    }
    for(int i=n-2;i>=0;--i){
        if(k[i]==k[i+1])++r;
        else break;
    }
    if(k[0]!=k[n-1]){
        cout<<l+r+1<<"\n";
    }else{
        long long resp=(((l-1)*(r))%998244353+r)%998244353;
        resp=(resp+r+l+1)%998244353;
        cout<<resp<<"\n";
    }
    return 0;
}
