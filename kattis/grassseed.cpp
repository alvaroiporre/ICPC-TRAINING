#include<bits/stdc++.h>
using namespace std;
int main(){
    double c,w,li,cost=0;
    int l;
    cin>>c>>l;
    while(l--){
        cin>>w>>li;
        cost+=(w*li);
    }
    cout<<fixed<<setprecision(7)<<c*cost<<"\n";
    return 0;
}
