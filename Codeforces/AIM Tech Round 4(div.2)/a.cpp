#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int k;
    cin>>x>>k;
    int let[28]={};
    if(x.size()<k||x.size()>26){
        cout<<"impossible\n";
        return 0;
    }else{
        int cont=0,d=0;
        for(int i=0;i<x.size();i++){
            int u=x[i]-'a';
            if(let[u]==0){
                d++;
                let[u]=1;
            }else{
                cont++;
            }
        }
        if(d>=k) cout<<"0\n";
        else cout<<k-d<<"\n";
    }
    return 0;
}
