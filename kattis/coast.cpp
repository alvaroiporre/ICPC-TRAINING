#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    vector<string> mapa(n+2);
    bool visit[n+2][m+2];
    //memset(mapa,0,sizeof(mapa));
    memset(visit,0,sizeof(visit));
    string in="";
    for(int i=0;i<m+2;i++)in+="0";
    //cout<<in<<">>\n";
    mapa[0]=mapa[n+1]=in;
    for(int i=1;i<=n;i++){
        cin>>mapa[i];
        mapa[i]="0"+mapa[i]+"0";
    }
    visit[0][0]=1;
    int costa=0;
    queue<pair<int, int> >q;
    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int,int> u=q.front();q.pop();
        int x=u.first,y=u.second;
        if(x>0){
            if(!visit[x-1][y]){
                if(mapa[x-1][y]!='1'){
                    q.push(make_pair(x-1,y));
                    visit[x-1][y]=1;
                }else costa++;
            }
        }
        if(y>0){
            if(!visit[x][y-1]){
                if(mapa[x][y-1]!='1'){
                    q.push(make_pair(x,y-1));
                    visit[x][y-1]=1;
                }else costa++;
            }
        }
        if(x<n+1){
            if(!visit[x+1][y]){
                if(mapa[x+1][y]!='1'){
                    q.push(make_pair(x+1,y));
                    visit[x+1][y]=1;
                }else costa++;
            }
        }
        if(y<m+1){
            if(!visit[x][y+1]){
                if(mapa[x][y+1]!='1'){
                    q.push(make_pair(x,y+1));
                    visit[x][y+1]=1;
                }else costa++;
            }
        }
    }
    cout<<costa<<"\n";

    return 0;
}
