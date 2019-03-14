#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int u[n+3];
        vector<int> up(n+3,1);
        for(int i=1;i<=n-2;i++){
            cin>>u[i];
            up[u[i]]++;
        }
        cout<<"hey\n";
        for(int i=1,j=1;i<=n;i++){
            cout<<i<<" "<<u[j]<<endl;
            up[u[j]]--;
            if(up[u[j]]==2)j++;
        }
    }



}
