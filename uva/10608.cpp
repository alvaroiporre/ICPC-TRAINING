#include<bits/stdc++.h>
#define MAX 30009
using namespace std;

bool visit[MAX];
int bfs(int u, vector<int>lista[]){
    queue<int>q;
    q.push(u);
    int cont=1;
    visit[u]=true;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<lista[x].size();i++){
            if(!visit[lista[x][i]]){
                visit[lista[x][i]]=true;
                cont++;
                q.push(lista[x][i]);
            }
        }
    }
    return cont;
}
int main(){
    int t,m,n,a,b;
    cin>>t;
        while(t--){
            cin>>n>>m;
            vector<int>lista[MAX];
            memset(visit,false,sizeof(visit));
            while(m--){
                cin>>a>>b;
                lista[a].push_back(b);
                lista[b].push_back(a);
            }
            int x=-1;
            for(int i=1;i<=n;i++){
                if(!visit[i]){
                    x=max(bfs(i,lista),x);
                }
            }
            cout<<x<<"\n";
        }

    return 0;
}
