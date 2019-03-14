#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int x;
        int n1=m;
        vector<int>fueron(n+1,0);
        while(m--){
            cin>>x;
            fueron[x]=1;
        }
        if(n==n1){
            cout<<"*";
        }else{
            for(int i=1;i<=n;i++){
                if(!fueron[i])cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

