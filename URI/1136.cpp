#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    while(cin>>n>>b&&n&&b){
        int bolas[n+1];
        int nbol=0;
        vector<bool> exist(n+1,false);
        for(int i=0;i<b;i++){
            cin>>bolas[i];
        }
        for(int i=0;i<b-1;i++){
            for(int j=i+1;j<b;j++){
                int bol=abs(bolas[i]-bolas[j]);
                if(!exist[bol]){
                    //cout<<bol<<">>\n";
                    nbol++;
                    exist[bol]=true;
                }
            }
        }

        if(n==nbol)cout<<"Y\n";
        else cout<<"N\n";
    }
    return 0;
}
