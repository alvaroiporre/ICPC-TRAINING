#include<bits/stdc++.h>
using namespace std;
long long fib[61];

long long fibu(int n){
    if(n<=1)return n;
    if(fib[n]>-1)return fib[n];
    fib[n]=fibu(n-1)+fibu(n-2);
    return fib[n];
}

int main(){
    memset(fib,-1,sizeof(fib));
    int x;
    fib[0]=0;
    fib[1]=1;
    cin>>x;
    while(x--){
        int u;
        cin>>u;
        cout<<"Fib("<<u<<") = "<<fibu(u)<<endl;
    }
    return 0;
}
