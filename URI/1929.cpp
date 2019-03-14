
#include <bits/stdc++.h>
using namespace std;

int main(){
    int v[4];
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    sort(v,v+4);
    if(v[0]+v[1]>v[2]||v[1]+v[2]>v[3]) cout<<"S\n";
    else cout<<"N\n";

    return 0;
}
