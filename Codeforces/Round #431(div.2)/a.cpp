//don't work
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    bool yes=true;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0&&x%2==0){
            yes=false;
        }
    }
    if((n%2==0&&(n/2)%2==0)||!yes){
        cout<<"No\n";
    }else cout<<"Yes\n";
    return 0;
}
