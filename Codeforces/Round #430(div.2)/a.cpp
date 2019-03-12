#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;

    for(int i=x;i<=y;i++){
        for(int j=i;j<=r;j+=i){
            if(j/i==k&&j%i==0&&j>=l){
                cout<<"YES\n";
                return 0;
            }
        }
    }
        cout<<"NO\n";
    return 0;
}
