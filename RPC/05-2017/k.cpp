
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int tiempo=0, n1=n, tpas=0;
    while(n1--){
        int men=10000005, pos=-1, tie=0;
        for(int i=0;i<k;i++){
            if(t[i]<=men&&t[i]!=0){
                pos=i;
                men=t[i];
            }
        }

        tie=t[pos]+tpas;
        tpas=tie;
        tiempo+=tie;
        t[pos]=0;
        if(k<n)k++;
    }
    cout<<tiempo<<endl;
    return 0;
}
