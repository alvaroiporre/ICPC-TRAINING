//topological sort
#include<bits/stdc++.h>
#define  DFS_WHITE -1
#define  DFS_BLACK 1
using namespace std;
typedef vector<int> vi;

vector<vi> graph;
vi dfs_num, answer;

void readGraph(int edges){
    int vertex1, vertex2;
    for(int i=1; i<=edges; i++){
        scanf("%d %d", &vertex1, &vertex2);
        graph[vertex1 - 1].push_back(vertex2 - 1);
    }
}

void dfs(int node){
    dfs_num[node] = DFS_BLACK;
    for(int x=0; x<graph[node].size(); x++)
       if(dfs_num[graph[node][x]] == DFS_WHITE)
          dfs(graph[node][x]);
    answer.push_back(node);
}

int main(){
    int vertices, edges;
    while(scanf("%d %d", &vertices, &edges)){
        if(!vertices && !edges)break;
        graph.assign(vertices, vi());
        dfs_num.assign(vertices, DFS_WHITE);
        readGraph(edges);

        for(int x=0; x<graph.size(); x++)
           if(dfs_num[x] == DFS_WHITE)
              dfs(x);

        reverse(answer.begin(), answer.end());
        for(int x=0; x<answer.size(); x++){
            if(x<answer.size() - 1)printf("%d ", answer[x]+1);
            else printf("%d\n", answer[x]+1);
        }
        answer.clear();
    }
    return 0;
}
