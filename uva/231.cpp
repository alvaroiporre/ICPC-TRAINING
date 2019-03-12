#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,cont=0;
    vector<int>mis;
    while(cin>>x){
        if(x==-1){
            cont++;
            if(mis.size()==0)break;
            reverse(mis.begin(),mis.end());
            vector<int>dp(mis.size(),1);
            int may=1;
            for(int i=1;i<mis.size();i++){
                for(int j=0;j<i;j++){
                    if(mis[j]<mis[i]){
                        dp[i]=max(dp[j]+1,dp[i]);
                        may=dp[i]>may?dp[i]:may;
                    }
                }
            }
            if(cont>1)cout<<"\n";
            cout<<"Test #"<<cont<<":\n  maximum possible interceptions: ";
            cout<<may<<"\n";
            mis.clear();
        }
        else{
            mis.push_back(x);
        }
    }
    return 0;
}
