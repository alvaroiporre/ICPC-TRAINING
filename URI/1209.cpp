#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    while(cin>>n>>m>>k){
        map<int, int>inv;
        map<int, int>::iterator it;
        vector<int>lista(n+1,0);
        while(m--){
            int a,b;
            cin>>a>>b;
            if(lista[a])inv[a]++;
            else{
                inv.insert(pair<int,int>(a,1));
                lista[a]++;
            }
            if(lista[b])inv[b]++;
            else{
                inv.insert(pair<int,int>(b,1));
                lista[b]++;
            }
        }
        //sort(inv.begin(),inv.end());
        bool yes=true;
        for(it=inv.begin();it!=inv.end();it++){
            if(it->second>=k){
                cout<<it->first<<" ";
                yes=false;
            }
        }
        if(yes)cout<<"0\n";
        else cout<<"\n";
    }

    return 0;
}
