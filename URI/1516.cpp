#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    while(cin>>n>>m&&n&&m){
        vector<string>let(n);
        for(int i=0;i<n;i++){
            cin>>let[i];
        }
        cin>>a>>b;
        int x=a/n,y=b/m;
        for(int i=0;i<n;i++){
            for(int l=0;l<x;l++){
                for(int j=0;j<m;j++){
                    for(int k=0;k<y;k++){
                        cout<<let[i][j];
                    }
                }
                cout<<"\n";
            }
        }
        cout<<"\n";

    }
    return 0;
}
