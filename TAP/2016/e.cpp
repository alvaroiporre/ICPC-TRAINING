#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
using namespace std;
int main(){
    int n,m,a,b;
    while(cin>>n>>m){
        vector<int>ap[1009];
        bool bo[1009]={false};
        forn(i,n){
            cin>>a>>b;
            ap[a].push_back(b);
            bo[a]=bo[b]=true;
        }
        bool ok=true;
        forsn(i,2,n+1){
            if(bo[i]){
                bool vis[1009]={false};
                queue<int>q;
                q.push(i);
                vis[i]=true;
                while(!q.empty()){
                    int c=q.front();
                    q.pop();
                    forn(j,ap[c].size()){
                        if(!vis[ap[c][j]]){
                            q.push(ap[c][j]);
                            vis[ap[c][j]]=true;
                        }
                    }
                }
                if(!vis[1]){
                    ok=false;
                    break;
                }
            }
        }
        cout<<(ok?"S\n":"N\n");
    }
    return 0;
}
