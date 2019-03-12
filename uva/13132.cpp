#include<bits/stdc++.h>
#define M 100009
//incompleto
using namespace std;
int d[M];
bool v[M]={false};
void criba(){
    v[1]=1;
    d[1]=1;
    for(int i=1;i<M;i++)
        d[i]=i;
    for(int i=2;i<M;i++){
        if(!v[i])
            for(int j=i;j<M;j+=i){
                v[j]=1;
                d[j]=d[j]/i*(i-1);
            }
    }
}
int main(){
    int t,n;
    criba();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<d[n]<<"\n";
    }
    return 0;
}

