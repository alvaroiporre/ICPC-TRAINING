#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int nums[p];
        bool f=true;
        for(int i=0;i<p;i++)cin>>nums[i];
        for(int i=0;i<(1<<p);i++){
            int s=0;
            for(int j=0;j<p;j++){
                if(i&(1<<j))s+=nums[j];
            }
            if(s==n){
                cout<<"YES\n";
                f=false;
                break;
            }
        }
        if(f)cout<<"NO\n";
    }
    return 0;
}
