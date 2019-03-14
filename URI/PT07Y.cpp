#include<bits/stdc++.h>
using namespace std;
bool visit[10001];
bool bfs(vector<int>graph[],int n){
    queue<int>q;
    q.push(1);
    int cont=0;
    while(!q.empty()){
        int x=q.front();q.pop();
        visit[x]=true;
        for(int i=0;i<graph[x].size();i++){
            if(visit[graph[x][i]])return false;
            else q.push(graph[x][i]);
        }
        cont++;
    }
    if(cont!=n)return false;
    return true;
}
int main(){
    int m,n,x,y;
    cin>>n>>m;
    vector<int>lista[n+1];
    memset(visit,false,sizeof(visit));
    for(int i=0;i<m;i++){
        cin>>x>>y;
        lista[x].push_back(y);
        //lista[y].push_back(x);
    }
    if(bfs(lista,n))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
