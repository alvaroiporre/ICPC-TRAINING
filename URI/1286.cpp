#include<bits/stdc++.h>


using namespace std;
int main(){
    int n,wt;
    while(cin>>n&&n){
        cin>>wt;
        int dp[50][50];
        int g[50],w[50];
        for(int i=0;i<n;i++){
            cin>>g[i]>>w[i];
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
        cout<<dp[n-1][wt]<<" min.\n";
    }


    return 0;
}
