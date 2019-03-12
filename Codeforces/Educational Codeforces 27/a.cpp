#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int>n(k*2);
    for(int i=0;i<2*k;i++){
        cin>>n[i];
    }
    sort(n.begin(),n.end());
    if(n[k]>n[k-1])cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
