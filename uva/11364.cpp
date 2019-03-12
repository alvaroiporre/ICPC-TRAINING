#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int may=-1,men=100;
        while(n--){
            cin>>x;
            if(x>may)may=x;
            if(x<men)men=x;
        }
        cout<<(may-men)*2<<endl;
    }

    return 0;
}
