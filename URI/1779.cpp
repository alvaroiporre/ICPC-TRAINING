#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>y;
        int z=y;
        while(y--)cin>>x;
        cout<<"Caso #"<<i<<": "<<z<<"\n";
    }
    return 0;
}
