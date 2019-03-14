#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l[5][5];
    cin>>t;
    while(t--){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cin>>l[i][j];
            }
        }
        queue<pair<int,int> >cola;
        cola.push(make_pair(0,0));
        l[0][0]=1;
        bool posible=false;
        while(!cola.empty()){
            pair<int,int>actual=cola.front();
            cola.pop();
            int a=actual.first,b=actual.second;
            if(a==4&&b==4){
                posible=true;
                break;
            }
            l[a][b]=1;
            if(a<4&&l[a+1][b]==0)cola.push(make_pair(a+1,b));
            if(b<4&&l[a][b+1]==0)cola.push(make_pair(a,b+1));
            if(a>0&&l[a-1][b]==0)cola.push(make_pair(a-1,b));
            if(b>0&&l[a][b-1]==0)cola.push(make_pair(a,b-1));
        }
        if(posible)cout<<"COPS\n";
        else cout<<"ROBBERS\n";
    }

    return 0;
}
