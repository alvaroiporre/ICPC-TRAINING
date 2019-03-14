#include<bits/stdc++.h>
int wp[2001];
int vp[2001];
int dp[2001][2001];
using namespace std;
int main(){
    int t,n,p,w,g;
    cin>>w>>t;
    for(int i=0;i<t;i++){
        cin>>wp[i]>>vp[i];
    }
    for(int j=0;j<t;j++)dp[j][0]=0;
    for(int k=0;k<t;k++){
        for(int l=1;l<=w;l++){
            if(l<wp[k]){
                if(k>0)dp[k][l]=dp[k-1][l];
                else dp[k][l]=0;
            }else{
                if(k>0)dp[k][l]=max(vp[k]+dp[k-1][l-wp[k]],dp[k-1][l]);
                else dp[k][l]=vp[k];
            }
        }
    }
    cout<<dp[t-1][w];
    return 0;
}
