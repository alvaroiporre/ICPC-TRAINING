
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,r=0;
    cin>>t;
        while(t--){
            cin>>a>>b;
            if(a>b)r+=b;
        }
        cout<<r<<endl;

    return 0;
}
