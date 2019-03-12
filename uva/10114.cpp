#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,x;
    double p,d,ca,cax;

    while(cin>>n>>p>>d>>t&&n>0){
        ca=d+p;
        double interes[101]={0};
        for(int i=0;i<t;i++){
            cin>>x;
            cin>>interes[x];
        }
        for(int i=1;i<=n;i++){
            if(interes[i]==0.0)interes[i]=interes[i-1];
        }
        int month=1;
        cax=(double)(d/n);
        ca-=(ca*interes[0]);
        while(d>=ca){
            d-=cax;
            ca-=(ca*interes[month]);
            month++;
            //cout<<d<<"  "<<ca<<">>>"<<endl;
        }
        if(month!=2)cout<<month-1<<" months\n";
        else cout<<month-1<<" month\n";
    }
    return 0;
}

