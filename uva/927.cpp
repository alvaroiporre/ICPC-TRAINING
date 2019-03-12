#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,k,t;
    long long d;
    cin>>c;
    while(c--){
        cin>>t;
        long long ci[t+1];
        for(int i=0;i<=t;i++)cin>>ci[i];
        cin>>d>>k;
        long long x,n;
        for(int j=1,l=0;l<k;j++){
            x=0;n=1;
            for(int i=0;i<=t;i++){
                x+=(ci[i]*n);
                n*=j;
            }
            l+=(j*d);
        }
        cout<<x<<endl;
    }


    return 0;
}
