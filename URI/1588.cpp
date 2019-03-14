#include<bits/stdc++.h>
using namespace std;

struct team{
    int pos;
    long long puntos;
    long long golesf;
    int wins;
    string nombre;
};
bool cmp(team a,team b){
    if(a.puntos==b.puntos){
        if(a.wins==b.wins){
            if(a.golesf==b.golesf){
                return a.pos<b.pos;
            }else return a.golesf>b.golesf;
        }else return a.wins>b.wins;
    }else return a.puntos>b.puntos;
}
int main(){
    int k;
    cin>>k;
    while(k--){
    int n,m,cont=0;
    cin>>n>>m;
    map<string,int>nombres;
    vector<team>equipos;
    while(n--){
        string name;
        cin>>name;
        team eq;
        eq.pos=cont;
        eq.nombre=name;
        eq.puntos=eq.golesf=0;
        nombres.insert(make_pair(name,cont++));
        equipos.push_back(eq);

    }
    while(m--){
        long long x,y;
        string nnx,nny;
        cin>>x>>nnx>>y>>nny;
        int nx=nombres[nnx],ny=nombres[nny];
        if(x==y){
            equipos[nx].puntos++;
            equipos[nx].golesf+=x;
            equipos[ny].puntos++;
            equipos[ny].golesf+=y;
        }else if(x>y){
            equipos[nx].puntos+=3;
            equipos[nx].golesf+=x;
            equipos[nx].wins++;
            equipos[ny].golesf+=y;
        }else{
            equipos[nx].golesf+=x;
            equipos[ny].puntos+=3;
            equipos[ny].golesf+=y;
            equipos[ny].wins++;
        }
    }
    sort(equipos.begin(),equipos.end(),cmp);
    for(int i=0;i<equipos.size();i++){
        cout<<equipos[i].nombre<<"\n";
    }
    }
    return 0;
}
