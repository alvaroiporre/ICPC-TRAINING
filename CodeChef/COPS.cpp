#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,m,n;
    cin>>t;
    while(t--){
        int casas[102]={0};
        cin>>m>>x>>y;
        while(m--){
            cin>>n;
            if(n-x*y>0){
                casas[n-x*y]--;
            }else{
                casas[0]--;
            }
            if(n+x*y<100){
                casas[n+x*y+1]++;
            }else{
                casas[101]++;
            }
        }
        int cont=0;
        for(int i=1;i<=100;i++){
            casas[i]+=casas[i-1];
            //cout<<i<<" "<<casas[i]<<"\n";
            if(casas[i]==0)cont++;
        }
        cout<<cont<<"\n";
    }
    return 0;
}
