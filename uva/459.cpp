#include<bits/stdc++.h>
using namespace std;
int p[26];
int find_(int a){
    if(p[a]==a)return a;
    return p[a]=find_(p[a]);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        char x;
        string y;
        cin>>x;
        cin.ignore();
        int nod=x-'A'+1;
        for(int i=0;i<nod;i++){
            p[i]=i;
        }
        while(1){
            if(!getline(cin,y) || y.empty()) break;
            p[y[0]-'A'+1]=p[y[1]-'A'+1];
        }
        int cont=0;
        vector<int>vis(26,0);
        for(int i=0;i<nod;i++){
            find_(i);
        }
        for(int i=0;i<nod;i++){
            vis[p[i]]++;
            //cout<<p[i]<<" "<<i<<"\n";
        }
        for(int i=0;i<nod;i++){
            if(vis[i])cont++;
        }
        cout<<cont<<"\n";
    }
    return 0;
}
