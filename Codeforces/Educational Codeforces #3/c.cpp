#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int num[20009]={0};
    int mini=20009,maxi=-1;
    for(int i=0;i<n;++i){
        cin>>m;
        mini=min(mini,m);
        maxi=max(maxi,m);
        num[m]++;
    }
    int c=0;
    while(maxi-mini>1){
        int u=min(num[maxi],num[mini]);
        c+=u;
        num[maxi]-=u;
        num[maxi-1]+=u;
        num[mini]-=u;
        num[mini+1]+=u;
        if(num[maxi]==0)maxi=maxi-1;
        if(num[mini]==0)mini=mini+1;
    }
    cout<<c<<"\n";
    return 0;
}
