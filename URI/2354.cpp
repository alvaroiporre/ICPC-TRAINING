#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    vector<int> votos(n+1,0);
    for(int i=0;i<n;i++){
        cin>>x>>y;
        votos[x]++;
        votos[y]++;
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(votos[i]<=n/2)c++;
    }
    cout<<c<<endl;
    return 0;
}

