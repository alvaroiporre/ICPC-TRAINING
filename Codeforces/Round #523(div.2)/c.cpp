#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n+1];
    for(int i=1;i<=n;++i)cin>>num[i];
    int r=0;
    vector<int>t;
    for(int i=1;i<=n;++i){
        t.clear();
        t.push_back(1);
        for(int j=i+1;j<=n;++j){
            int si=t.size();
            for(int k=0;k<si;++k){
                if(num[j]%(t[k]+1)==0){
                    t.push_back(t[k]+1);
                }
            }
        }
        r=(r%MOD+((int)t.size())%MOD)%MOD;
    }
    cout<<r<<"\n";
    return 0;
}
