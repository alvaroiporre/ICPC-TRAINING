#include<bits/stdc++.h>
#define MAX 1001
using namespace std;
int padre[MAX];

bool cmp(tuple<int,int,int>x,tuple<int,int,int>y){
    return get<2>(x) < get<2>(y);
}
int dsu_get (int v) {
    return (v == padre[v])?  v : (padre[v] = dsu_get(padre[v]));
}
void dsu_unite (int a, int b) {
    a = dsu_get (a);
    b = dsu_get (b);
    if (rand() & 1)
        swap(a, b);
    if (a!= b)
        padre[a] = b;
}
int main(){
    int t,p,n,m;
    cin>>t;
    while(t--){
        cin>>p>>n>>m;
        int a,b,c;
        vector<tuple<int,int,int>>lista;
        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            lista.push_back(make_tuple(a,b,c));
        }
        sort(lista.begin(),lista.end(),cmp);
        /*for(int i=0;i<m;i++){
            cout<<get<0>(lista[i])<<get<1>(lista[i])<<get<2>(lista[i])<<"\n";
        }*/
        int cost=0;
        //p.resize(n+1);
        for(int j=0;j<n;j++){
            padre[j]=j;
        }
        for(int i=0; i<m; ++i) {
            int a = get<0>(lista[i]), b = get<1>(lista[i]), l = get<2>(lista[i]);
            if(dsu_get(a)!= dsu_get(b)) {
                cost += l;
                //res.push_back (g[i] .second);
                dsu_unite (a, b);
            }
        }
        cout<<cost*p<<endl;
    }
    return 0;
}
