#include<bits/stdc++.h>
using namespace std;
bool cmp(tuple<int,int,int,int>x,tuple<int,int,int,int>y){
    return get<3>(x)<get<3>(y);
}
int main(){
    int n,a,b;
    while(cin>>n&&n!=0){
        vector<bool>estados(n,0);
        bool yes=true;
        vector<tuple<int,int,int,int>>lista;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            lista.push_back(make_tuple(a,b,i,i+b));
            if(i+b>=0&&i+b<n){
                if(!estados[i+b])estados[i+b]=true;
                else yes=false;
            }
            else yes=false;
        }
        if(yes){
            sort(lista.begin(),lista.end(),cmp);
            for(int i=0;i<n;i++){
                cout<<get<0>(lista[i]);
                if(i<n-1)cout<<" ";
                else cout<<"\n";
            }
        }else{
            cout<<"-1\n";
        }

    }
    return 0;
}
