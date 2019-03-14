#include <bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin>>x;
    int b[12]={};
    float c[]={100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
    for(int i=0;i<12;i++){
        while(x>=c[i]){
            x-=c[i];
            b[i]++;
        }
    }
    if(x>=0.009)b[11]++;
    cout<<"NOTAS:\n";
    for(int i=0;i<6;i++){
        cout<<fixed<<setprecision(2)<<b[i]<<" nota(s) de R$ "<<c[i]<<"\n";
    }
    cout<<"MOEDAS:\n";
    for(int i=6;i<12;i++){
        cout<<fixed<<setprecision(2)<<b[i]<<" moeda(s) de R$ "<<c[i]<<"\n";
    }

    return 0;
}




