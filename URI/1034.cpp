#include<bits/stdc++.h>
#define M 1000001
using namespace std;
int tam[M];
int blocks[26];
int main() {
    int i, t, n, m;
    cin >> t;
    while (t--) {
        cin>>n>>m;
        memset(blocks, 0, sizeof(blocks));
        memset(tam,M,sizeof(tam));
        for (i=0;i<n;i++)cin>>blocks[i];
        tam[0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=m;j++){
                if(j>=blocks[i])tam[j]=min(tam[j],tam[j-blocks[i]]+1);
            }
        }
        cout <<tam[m]<<"\n";
    }
    return 0;
}
