#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>a>>b;
    vector<int>paises[a+1];
    vector<bool>visitado(a+1,false);
    while(b--){
        cin>>x>>y;
        paises[x].push_back(y);
        paises[y].push_back(x);
    }
    int cam=0;
    for(int i=1;i<=a;i++){
        if(!visitado[i]){
            cam++;
            queue<int>q;
            q.push(i);
            while(!q.empty()){
                int k=q.front();q.pop();
                visitado[k]=true;
                for(int j=0;j<paises[k].size();j++){
                    if(!visitado[paises[k][j]]){
                        q.push(paises[k][j]);
                    }
                }
            }
        }
    }
    if(cam>1)cout<<cam-1<<endl;
    else cout<<0<<endl;
    return 0;
}
