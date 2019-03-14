#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,x,k,v;
    while(cin>>m>>n){
        vector<int> pos[1000009];
        for(int i=0;i<m;++i){
            cin>>x;
            pos[x].push_back(i+1);
        }
        for(int i=0;i<n;++i){
            cin>>k>>v;
            if(k<=pos[v].size())cout<<pos[v][k-1]<<"\n";
            else cout<<"0\n";
        }
    }
    return 0;
}
