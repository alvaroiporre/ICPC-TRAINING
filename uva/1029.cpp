#include<bits/stdc++.h>
long long llam,l2;
long long fibu(int n){
    l2++;
    if(n==1){
        llam++;
        return 1;
    }
    if(n==0)return 0;
    return fibu(n-1)+fibu(n-2);
}
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        llam=l2=0;
        cin>>n;
        fibu(n);
        cout<<"fib("<<n<<") = "<<l2-1<<" calls = "<<llam<<"\n";
    }
    return 0;
}
