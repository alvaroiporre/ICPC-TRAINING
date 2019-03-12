#include <bits/stdc++.h>
using namespace std;
int main(){
    double estudiantes;
    while(cin>>estudiantes&&estudiantes>0){
        vector<double> gastos(estudiantes);
        double prom=0,gaspos=0,gasneg=0;
        for(int i=0;i<estudiantes;i++){
            cin>>gastos[i];
            prom+=gastos[i];
        }
        prom=(double)(prom/estudiantes);
        for(int i=0;i<estudiantes;i++){
            if(gastos[i]>prom) gaspos+=(double)(long)((gastos[i]-prom)*100.0)/100.0;
            else if(gastos[i]<prom) gasneg+=(double)(long)((prom-gastos[i])*100.0)/100.0;
        }
        prom=(gasneg>gaspos)?gasneg:gaspos;
        cout<<fixed<<setprecision(2)<<"$"<<prom<<endl;
    }

    return 0;
}
