//falta resolver

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,wt,insta=1;
    while(cin>>n>>wt&&n&&wt){
        int dp[601][601];
        int g[601],w[601];
        for(int i=0;i<n;i++){
            cin>>w[i]>>g[i];
        }
        for(int i=0;i<n;i++)dp[i][0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=wt;j++){
                if(j<w[i]){
                    if(i)dp[i][j]=dp[i-1][j];
                    else dp[i][j]=0;
                }else{
                    if(i)dp[i][j]=max(g[i]+dp[i-1][j-w[i]],dp[i-1][j]);
                    else dp[i][j]=g[i];
                }
            }
        }
        cout<<dp[n-1][wt]<<"\n\n";
    }


    return 0;
}
