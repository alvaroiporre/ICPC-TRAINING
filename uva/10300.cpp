#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,m,a,p;
    cin>>n;
    while(n--){
        cin>>t;
        int x=0;
        while(t--){
            cin>>m>>a>>p;
            x+=(m*p);
        }
        cout<<x<<endl;
    }

    return 0;
}
