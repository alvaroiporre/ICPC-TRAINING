#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>a,pair<int, int>b){
    return a.second<b.second;
}

int main(){
    int n,cont=1;
    int cons[201]={0};
    while(cin>>n&&n!=0){
        if(cont>1)cout<<"\n";
        map<int,int>consumo;
        double prom=0,hab=0;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(cons[b/a]>0){
                consumo[b/a]+=a;

            }else{
                consumo.insert(make_pair(b/a,a));
                cons[b/a]++;
            }
            hab+=a; prom+=b;
        }
        //sort(consumo.begin(),consumo.end(),cmp);
        n=consumo.size();
        cout<<"Cidade# "<<cont<<":\n";
        for(map<int,int>::iterator i=consumo.begin();i!=consumo.end();i++){

            cout<<i->second<<"-"<<i->first<<" ";

        }
        prom/=hab;
        cout<<"\nConsumo medio: "<<fixed<<setprecision(2)<<floor(prom*pow(10, 2))/pow(10, 2)<<" m3.\n";
        cont++;
    }

    return 0;
}
