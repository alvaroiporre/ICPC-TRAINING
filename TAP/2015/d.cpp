#include<bits/stdc++.h>
using namespace std;
vector<int> ct[1009];
bool visit[1009];
int deg[1009];
pair<int,int> dfs(int ini){
    visit[ini]=true;
    pair<int,int>temp;
    temp.first=1;
    temp.second=deg[ini];
    for(int i=0;i<ct[ini].size();i++){
        if(!visit[ct[ini][i]]){
            pair<int,int>x=dfs(ct[ini][i]);
            temp.first+=x.first;
            temp.second+=x.second;
        }
    }
    return temp;
}

int main(){
    int n,m,r,e;
    while(cin>>n>>m>>r>>e){
        memset(visit,false,sizeof(visit));
        memset(deg,0,sizeof(deg));
        for(int i=0;i<=1000;i++)ct[i].clear();
        while(m--){
            int a,b;
            cin>>a>>b;
            ct[a].push_back(b);
            ct[b].push_back(a);
            deg[a]++;deg[b]++;
        }
        int pre=0;
        for(int i=1;i<=n;i++){
            if(!visit[i]){
                pair<int,int> dfs_=dfs(i);
                //cout<<dfs_.first<<" "<<dfs_.second/2<<endl;
                pre+=min((dfs_.first*(dfs_.first-1)/2-dfs_.second/2)*r,(dfs_.first)*e);
            }
        }
        cout<<pre<<endl;

    }
    return 0;
}
