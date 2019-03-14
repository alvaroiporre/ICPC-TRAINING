#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m=100,in=0,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x<m){
            m=x;
            in=i;
        }
    }
    cout<<in<<endl;
    return 0;
}


