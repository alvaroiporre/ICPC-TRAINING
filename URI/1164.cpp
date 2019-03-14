#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,sum,t;
    while(cin>>t){
        while(t--){
            cin>>n;
            sum=0;
            for(i=1;2*i<=n;i++){
                if(n%i==0)sum+=i;
            }
            cout<<n;
            cout<<((sum==n)?" eh perfeito\n":" nao eh perfeito\n");
        }
    }
    return 0;
}
