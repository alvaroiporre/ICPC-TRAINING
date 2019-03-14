#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    string a,b,c,d;
    while(t--){
        cin>>a>>b>>c>>d;
        cin>>x>>y;
        if((x+y)&1){
            if(b=="IMPAR")cout<<a<<"\n";
            else cout<<c<<"\n";
        }else{
            if(b=="PAR")cout<<a<<"\n";
            else cout<<c<<"\n";
        }
    }

    return 0;
}
