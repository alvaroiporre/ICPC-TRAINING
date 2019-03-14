#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>notas;
    notas.push_back("DO");
    notas.push_back("DO#");
    notas.push_back("RE");
    notas.push_back("RE#");
    notas.push_back("MI");
    notas.push_back("FA");
    notas.push_back("FA#");
    notas.push_back("SOL");
    notas.push_back("SOL#");
    notas.push_back("LA");
    notas.push_back("LA#");
    notas.push_back("SI");
    int x,t;
    string u;
    cin>>x>>u;
    if(u=="DO"){
        t=0;
    }else if(u=="DO#"){
        t=1;
    }else if(u=="RE"){
        t=2;
    }else if(u=="RE#"){
        t=3;
    }else if(u=="MI"){
        t=4;
    }else if(u=="FA"){
        t=5;
    }else if(u=="FA#"){
        t=6;
    }else if(u=="SOL"){
        t=7;
    }else if(u=="SOL#"){
        t=8;
    }else if(u=="LA"){
        t=9;
    }else if(u=="LA#"){
        t=10;
    }else if(u=="SI"){
        t=11;
    }
    t-=x;
    if(t<0)t=11+t+1;
    cout<<notas[t]<<"\n";
    return 0;
}
