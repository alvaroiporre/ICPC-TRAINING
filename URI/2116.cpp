#include<bits/stdc++.h>
using namespace std;
int primo(int n){
    if(n<4) return n;
    int c=0;
    for(int i=2;2*i<=n;i++){
        if(n%i==0) c++;
    }
    if(c==0) return n;
    return primo(n-1);
}
int main(){
    int n,m,p1,p2;
    cin>>n>>m;
    p1=primo(n);
    p2=primo(m);
    cout<<p1*p2<<endl;
    return 0;
}
