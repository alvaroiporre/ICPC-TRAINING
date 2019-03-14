#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        string x,a1,a2;
        cin>>x;
        int tam=x.length();
        a1=x.substr(0,tam/2);
        if(tam&1)a2=x.substr(tam/2+1,tam/2);
        else a2=x.substr(tam/2,tam/2);
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        cout<<(a1==a2?"YES":"NO")<<"\n";
    }
    return 0;
}
