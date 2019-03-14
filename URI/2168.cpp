#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bloque[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<n+1;j++){
            cin>>bloque[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bloque[i][j]+bloque[i][j+1]+bloque[i+1][j]+bloque[i+1][j+1]>=2)cout<<"S";
            else cout<<"U";
        }
        cout<<"\n";
    }
    return 0;
}
