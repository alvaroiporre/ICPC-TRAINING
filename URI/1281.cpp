#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,m;
    cin>>t;
    while(t--){
        map<string,double>lista;
        cin>>n;
        while(n--){
            string x;
            double y;
            cin>>x>>y;
            lista.insert(make_pair(x,y));
        }
        cin>>m;
        double costo=0;
        while(m--){
            string x;
            int y;
            cin>>x>>y;

            costo=costo+(lista[x]*(double)y);
        }
        cout<<"R$ "<<fixed<<setprecision(2)<<costo<<endl;

    }
    return 0;
}
