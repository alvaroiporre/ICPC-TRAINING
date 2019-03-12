#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin>>x;
    bool f=false;
    for(int i=0;i<5;++i){
        cin>>y;
        if(y[0]==x[0]||y[1]==x[1])f=true;
    }
    cout<<(f?"YES\n":"NO\n");

    return 0;
}
