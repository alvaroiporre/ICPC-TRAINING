#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> f(n);
    for(int i=0;i<n;i++)cin>>f[i];
    sort(f.rbegin(),f.rend());
    int s=0,c=0;
    while(s<m){
        s+=f[c++];
    }
    cout<<c<<"\n";
    return 0;
}

