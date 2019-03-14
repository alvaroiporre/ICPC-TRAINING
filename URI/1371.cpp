#include<bits/stdc++.h>
using namespace std;
bool conv(bool x){
    if(x==true)return false;
    return true;
}
int main(){
    int n;
    while(cin>>n){
        if(n<4){cout<<"1\n";continue;}
        vector<bool>a(n+1,0);
        for(int i=2;i<=n/2;i++){
            for(int j=i;j<=n;j+=i){
                a[j]=conv(a[j]);
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i])cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
