#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m;
    int mini=1000009;
    map<int,int>t;
    for(int i=0;i<n;i++){
        cin>>x;
        mini=min(mini,x);
        t[x]++;
    }
    int s=0;
    for(map<int,int>::iterator it=t.begin();it!=t.end(); it++){
        it->second+=s;
        //cout<<it->first<<" "<<it->second<<"\n";
        s=it->second;
    }
    for(int i=0;i<m;++i){
        cin>>x;
        if(x<mini)cout<<"0";
        else if(t.find(x)!=t.end())cout<<t.find(x)->second;
        else{
            map<int,int>::iterator u=t.upper_bound(x);
            u--;
            cout<<u->second;
        }
        if(i<m-1)cout<<" ";
    }
    cout<<"\n";
    return 0;
}
