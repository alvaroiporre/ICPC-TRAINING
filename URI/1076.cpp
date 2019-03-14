#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int ini,con,nod,a,b;
        cin>>ini;
        cin>>nod>>con;
        int pasos=0;
        set<int>lab[nod+1];
        vector<bool> visitado(nod+1,0);
        while(con--){
            cin>>a>>b;
            lab[a].insert(b);
            lab[b].insert(a);
        }
        stack<int>cola;
        cola.push(ini);
        while(!cola.empty()){
            int x=cola.top();
            visitado[x]=true;
            cola.pop();
            for(set<int>::iterator i=lab[x].begin();i!=lab[x].end();i++){
                //cout<<*i<<" iterador"<<endl;
                if(!visitado[*i]){
                    cola.push(*i);
                    //cout<<x<<"->"<<lab[x][i]<<"\n";
                    pasos++;
                }
            }
        }
        cout<<2*pasos<<endl;


    }
    return 0;
}
