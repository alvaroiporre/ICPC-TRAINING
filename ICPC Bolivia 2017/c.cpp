#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
    vector <string> v(n+2);
    string s="";
    for(int i=0;i<m+2;i++)s+=".";
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]="."+v[i]+".";
    }
    v[0]=v[n+1]=s;
    int mm=0;
    n+=2;
    m+=2;
    bool visit[n][m];
    int compo[n][m];
    vector<int> comp(1004005,0);
    vector<bool> salida(1004005,0);
    int ncomp=0;
    memset(visit,false,sizeof(visit));
    memset(compo,-1,sizeof(compo));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visit[i][j]&&v[i][j]!='*'){
                int cant=0;
                queue<pair<int,int > >q;
                q.push({i,j});
                visit[i][j]=true;
                compo[i][j]=ncomp;
                while(!q.empty()){
                    int k=q.front().first;
                    int l=q.front().second;
                    if(v[k][l]=='.')salida[ncomp]=1;
                    else cant++;
                    q.pop();
                    if(k>0&&l>0&&!visit[k-1][l-1]&&v[k-1][l-1]!='*'){
                        visit[k-1][l-1]=true;
                        q.push({k-1,l-1});
                        compo[k-1][l-1]=ncomp;
                    }
                    if(k>0&&!visit[k-1][l]&&v[k-1][l]!='*'){
                        visit[k-1][l]=true;
                        q.push({k-1,l});
                        compo[k-1][l]=ncomp;
                    }
                    if(k>0&&l<m-1&&!visit[k-1][l+1]&&v[k-1][l+1]!='*'){
                        visit[k-1][l+1]=true;
                        q.push({k-1,l+1});
                        compo[k-1][l+1]=ncomp;
                    }
                    if(l>0&&!visit[k][l-1]&&v[k][l-1]!='*'){
                        visit[k][l-1]=true;
                        q.push({k,l-1});
                        compo[k][l-1]=ncomp;
                    }
                    if(l<m-1&&!visit[k][l+1]&&v[k][l+1]!='*'){
                        visit[k][l+1]=true;
                        q.push({k,l+1});
                        compo[k][l+1]=ncomp;
                    }
                    if(k<n-1&&l>0&&!visit[k+1][l-1]&&v[k+1][l-1]!='*'){
                        visit[k+1][l-1]=true;
                        q.push({k+1,l-1});
                        compo[k+1][l-1]=ncomp;
                    }
                    if(k<n-1&&!visit[k+1][l]&&v[k+1][l]!='*'){
                        visit[k+1][l]=true;
                        q.push({k+1,l});
                        compo[k+1][l]=ncomp;
                    }
                    if(k<n-1&&l<m-1&&!visit[k+1][l+1]&&v[k+1][l+1]!='*'){
                        visit[k+1][l+1]=true;
                        q.push({k+1,l+1});
                        compo[k+1][l+1]=ncomp;
                    }
                }
                //cout<<i<<" "<<j<<" "<<cant<<" "<<ncomp<<" "<<salida[ncomp]<<endl;
                comp[ncomp]=cant;
                ncomp++;
            }
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(v[i][j]=='*'){
                set <int>nn;
                bool flag=false;
                for(int k=i-1;k<i+2;k++){
                    for(int l=j-1;l<j+2;l++){
                        if(compo[k][l]!=-1){
                            //cout<<k<<" "<<l<<endl;
                            nn.insert(compo[k][l]);
                            if(salida[compo[k][l]])flag=true;
                        }
                    }
                }
                if(flag){
                    int edif=0;
                    for(set<int>::iterator it=nn.begin();it!=nn.end();it++){
                        edif+=comp[(int)(*it)];
                    }
                    mm=max(mm,edif);
                }

            }
        }
    }
    cout<<mm<<endl;
    }
    return 0;
}
