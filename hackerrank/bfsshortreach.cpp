
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        cin >> n >> m;
        vector< set<int> >lista;
        lista.resize(n+1);
        int visitado[n+1]={false};
        for(int a1 = 0; a1 < m; a1++){
            int u;
            int v;
            cin >> u >> v;
            lista[u].insert(v);
            lista[v].insert(u);
        }
        int s;
        int d[n+1]={0};
        cin >> s;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int x=q.front();q.pop();
            for(set<int>::iterator i=lista[x].begin();i!=lista[x].end();i++){
                if(!visitado[*i]){
                    q.push(*i);
                    d[*i]+=(d[x]+6);
                    visitado[*i]=true;
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(i!=s){
                if(d[i]==0)cout<<"-1 ";
                else cout<<d[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
