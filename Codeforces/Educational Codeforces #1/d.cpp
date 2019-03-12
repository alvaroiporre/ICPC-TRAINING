#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<string>cell(n);
    for(int i=0;i<n;i++){
        cin>>cell[i];
    }
    int num[n][m];
    memset(num,0,sizeof(num));
    int cant[n*m]={0};
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(num[i][j]==0&&cell[i][j]=='.'){
                queue<pair<int,int> >q;
                q.push({i,j});
                int ci=0;
                num[i][j]=c;
                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();

                    if(y>0&&cell[x][y-1]=='*')ci++;
                    if(y<m-1&&cell[x][y+1]=='*')ci++;
                    if(x>0&&cell[x-1][y]=='*')ci++;
                    if(x<n-1&&cell[x+1][y]=='*')ci++;

                    if(y>0&&cell[x][y-1]=='.'&&num[x][y-1]==0)q.push({x,y-1}),num[x][y-1]=c;
                    if(y<m-1&&cell[x][y+1]=='.'&&num[x][y+1]==0)q.push({x,y+1}),num[x][y+1]=c;
                    if(x>0&&cell[x-1][y]=='.'&&num[x-1][y]==0)q.push({x-1,y}),num[x-1][y]=c;
                    if(x<n-1&&cell[x+1][y]=='.'&&num[x+1][y]==0)q.push({x+1,y}),num[x+1][y]=c;
                }

                cant[c++]=ci;
            }
        }
    }

    while(k--){
        int a,b;
        cin>>a>>b;
        cout<<cant[num[a-1][b-1]]<<"\n";
    }
    return 0;
}
