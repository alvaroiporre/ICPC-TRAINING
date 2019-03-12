#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    vector<string>nombres(n);
    vector<int>B(n),T(n),D(n),
    vector<vector<int> > U(n,vector<int>(100,0));
    //,L(n,vector<int>(100));

    for(int i=0;i<n;i++){
        cin>>nombres[i]>>B[i]>>T[i]>>D[i];
        for(int j=0;j<2*D[i];j++){
            int x,y;
            cin>>x>>y;
            L[i].push_back(x);
            U[i].push_back(y);
        }
    }

    //for(int i=0;i<r;i++){


    return 0;
}
