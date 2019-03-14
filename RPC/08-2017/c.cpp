#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,p,x,l,a,b;
    cin>>c>>p>>x>>l;
    vector<int >estados(c+1,0);
    vector<int>visitado(c+1,0);
    vector<int>com[c+1];
    const int val=x;
    while(p--){
        cin>>a>>b;
        com[a].push_back(b);
        com[b].push_back(a);
        estados[a]++;
        estados[b]++;
    }
    if(x==l){
        cout<<"leave\n";
        return 0;
    }
    vector<int>ec=estados;
    queue<int>paises;
    paises.push(l);
    visitado[l]++;
    estados[l]=0;
    while(!paises.empty()){
        int u=paises.front();paises.pop();
        if(u==x) break;
        for(int i=0;i<com[u].size();i++){
            if(!visitado[com[u][i]]){
                estados[com[u][i]]--;
                if(2*estados[com[u][i]]<=ec[com[u][i]]){
                    visitado[com[u][i]]=true;
                    paises.push(com[u][i]);
                }
            }
        }
    }

    cout<<(visitado[x]?"leave":"stay")<<"\n";

    return 0;
}
