#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,w[55];
    cin>>t;
    for(int i=1;i<=t;i++){
        int u=0,d=0;
        cin>>n;
        cin>>w[0];
        for(int j=1;j<n;j++){
            cin>>w[j];
            if(w[j]>w[j-1]) u++;
            if(w[j]<w[j-1]) d++;
        }
        cout<<"Case "<<i<<": "<<u<<" "<<d<<"\n";
    }
    return 0;
}
