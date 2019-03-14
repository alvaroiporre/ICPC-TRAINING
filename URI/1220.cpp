#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n&&n>0){
        int x[n],s=0,t=0;
        double pr;
        for(int i=0;i<n;i++){
            int c,m;
            scanf("%d.%d",&m,&c);
            x[i]=m*100+c;
            s+=x[i];
        }
        pr=((double)s)/(double)n;

        double ex=0,de=0;
        for(int i=0;i<n;i++){
            if(pr>(double)x[i])ex+=(int)(pr-x[i])/100.0;
            if(pr<(double)x[i])de+=(int)(x[i]-pr)/100.0;
        }

        cout<<fixed<<setprecision(2)<<"$"<<max(ex,de)<<"\n";
    }

    return 0;
}
