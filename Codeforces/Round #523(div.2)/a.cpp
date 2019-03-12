#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int r=s/n;
    s%=n;
    if(s>0)r++;
    cout<<r<<"\n";

    return 0;
}
