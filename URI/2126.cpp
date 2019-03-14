#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    int t=1;
    int nx,ny,cont,ind;
    while(cin>>x>>y){
        nx=x.size();
        ny=y.size();
        cont=0;
        ind=-1;
        for(int i=0;i<=ny-nx;i++){
            if(y.substr(i,nx)==x){
                cont++;
                ind=i;
            }
        }
        cout<<"Caso #"<<t<<":\n";
        if(cont>0){
            cout<<"Qtd.Subsequencias: "<<cont<<"\n";
            cout<<"Pos: "<<ind+1<<"\n";
        }else{
            cout<<"Nao existe subsequencia\n";
        }
        cout<<"\n";
        t++;
    }

    return 0;
}
