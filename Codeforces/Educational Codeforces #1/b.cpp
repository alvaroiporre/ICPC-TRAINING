#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int m,l,r,k;
    cin>>s>>m;
    int t=s.size();
    string u;
    while(m--){
        cin>>l>>r>>k;
        k%=(r-l+1);
        l--;
        r--;
        u=s.substr(0,l)+s.substr(r-k+1,k)+s.substr(l,r-l+1-k)+s.substr(r+1,t-r-1);
        s=u;
    }
    cout<<u<<endl;
    return 0;
}

