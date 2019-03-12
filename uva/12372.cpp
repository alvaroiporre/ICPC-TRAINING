#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        cout<<"Case "<<i<<": ";
        if(x<=20&&y<=20&&z<=20)cout<<"good\n";
        else cout<<"bad\n";
    }

    return 0;
}
