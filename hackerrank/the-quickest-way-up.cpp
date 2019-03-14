#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,esc,ser;
    int dir[109];
    cin>>t;
    while(t--){
        cin>>esc;
        int a,b;
        for(int i=1;i<=100;i++)dir[i]=i;
        while(esc--){
            cin>>a>>b;
            dir[a]=b;
        }
        cin>>ser;
        while(ser--){
            cin>>a>>b;
            dir[a]=b;
        }
        vector<int>lista[109];
        for(int i=1;i<100;i++){
            if(dir[i]==i){
                for(int j=i+1;j<=i+6&&j<=100;j++){
                    lista[i].push_back(dir[j]);
                }
            }
        }
        int d[109]={0};
        bool visit[109]={false};
        queue<int>q;
        q.push(1);
        while(!q.empty()){
            int x=q.front();q.pop();
            for(int i=0;i<lista[x].size();i++){
                if(!visit[lista[x][i]]){
                    //cout<<x<<" >> "<<lista[x][i]<<"\n";
                    d[lista[x][i]]=(d[x]+1);
                    q.push(lista[x][i]);
                    visit[lista[x][i]]=true;
                }
            }

        }
        //for(int i=1;i<=101;i++)
        //    cout<<i<<" "<<d[i]<<endl;
        if(d[100]>0)cout<<d[100];
        else cout<<-1<<endl;
    }

    return 0;
}
