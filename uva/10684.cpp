#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int dp[10009];
    while(cin>>t&&t>0){
        int s=-1;
        dp[0]=0;
        for(int i=1;i<=t;i++){
            cin>>dp[i];
        }
        for(int i=1;i<=t;i++){
            dp[i]=max(dp[i]+dp[i-1],dp[i]);
            s=((dp[i]>s)?dp[i]:s);
        }
        if(s>0)cout<<"The maximum winning streak is "<<s<<".\n";
        else cout<<"Losing streak.\n";
    }
    return 0;
}
