#include<bits/stdc++.h>
int wp[1001];
int vp[1001];
int dp[1001][1001];
using namespace std;
int main(){
    int t,n,p,w,g;
    cin>>t;
    while(t--){
        int prod,per,tot=0;;
        cin>>prod;
        for(int i=0;i<prod;i++){
            cin>>vp[i]>>wp[i];
        }
        cin>>per;
        for(int i=0;i<per;i++){
            cin>>w;
            for(int j=0;j<prod;j++)dp[j][0]=0;
            for(int k=0;k<prod;k++){
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
            tot+=dp[prod-1][w];
        }
        cout<<tot<<"\n";
    }
    return 0;
}
