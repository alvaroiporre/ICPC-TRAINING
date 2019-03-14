#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c0,c1,x;
    cin>>n;
    c0=c1=0;
    while(n--){
        cin>>x;
        if(x)c1++;
        else c0++;
    }
    if(c0>c1)cout<<"Y\n";
    else cout<<"N\n";

    return 0;
}
