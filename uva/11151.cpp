#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main(){
    int t;
    string x,y;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,x);
        y=x;
        reverse(y.begin(),y.end());
        for(int i=0;i<=x.size();i++)dp[0][i]=0;
        for(int i=1;i<=x.size();i++){
            dp[i][0]=0;
            for(int j=1;j<=y.size();j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout<<dp[x.size()][y.size()]<<"\n";
    }
    return 0;
}
