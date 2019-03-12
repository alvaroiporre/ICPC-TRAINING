#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,q,a,b;
    cin>>q;
    while(q--){
        cin>>n>>a>>b;
        cout<<min(n*a,b*(n/2)+(n%2)*a)<<"\n";
    }
    return 0;
}
