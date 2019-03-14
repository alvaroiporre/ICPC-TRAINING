#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    int a,a1;
    char x,x1;
    cin>>t;
    while(t--){
    cin>>n;
    bool f=true;
    cin>>a1>>x1;
    n--;
    while(n--){
        cin>>a>>x;
        if(a==a1||x==x1){
            f=false;
        }
        a1=a;x1=x;
    }
    if(f)cout<<"B\n";
    else cout<<"M\n";
    }
    return 0;
}
