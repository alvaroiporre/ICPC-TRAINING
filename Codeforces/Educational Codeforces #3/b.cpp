#include<bits/stdc++.h>
#define MOD 2000000000
using namespace std;
int main(){
    int n,m,x;
    long long b[12]={0};
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>x;
        b[x]++;
    }
    long long s=0;
    for(int i=0;i<m;++i){
    if(b[i]>0)for(int j=i+1;j<m+1;++j){
                if(b[j]>0){
                    s+=(b[i]*b[j]);
                }
            }
    }
    cout<<s<<endl;
    return 0;
}

