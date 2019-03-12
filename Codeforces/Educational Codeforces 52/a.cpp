#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a,s,b,c;
    cin>>t;
    while(t--){
        cin>>s>>a>>b>>c;
        long long x=s/c;
        x=x+(x/a)*b;
        cout<<x<<endl;
    }


    return 0;
}
