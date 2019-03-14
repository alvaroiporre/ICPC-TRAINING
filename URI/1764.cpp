#include <bits/stdc++.h>
using namespace std;

const int INF = 2147483647;
const int MAX = 50005;
int D[MAX], N; // Keeps minimum distance to each node
vector<pair<int,int>> E[MAX]; // Adjacency list

void dijkstra()
{
    for(int i = 1; i <= N; i++) D[i] = INF;
    D[0] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,0});

    while(!q.empty())
    {
        pair<int,int> p = q.top();
        q.pop();

        int u = p.second, dist = p.first;
        if(dist > D[u]) continue;

        for(pair<int,int> pr : E[u])
        {
            int v = pr.first;
            int next_dist = dist + pr.second;

            if(next_dist < D[v])
            {
                D[v] = next_dist;
                q.push({next_dist,v});
            }
        }
    }
}
int main(){
    int x,y;
    while(cin>>x>>y&&x!=0&&y!=0){
        while(y--){
            int n1,n2,d;
            cin>>n1>>n2>>d;
            E[n1].push_back(make_pair(d,n2));
        }
        dijkstra();
        int dt=0;
        for(int i=0;i<x;i++){
            dt+=D[i];
        }
        cout<<dt<<endl;
    }
    return 0;
}
