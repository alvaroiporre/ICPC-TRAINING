#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,idm;
    double b,nm=-1;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(b>nm){
            nm=b;
            idm=a;
        }
    }
    if(nm>=8.0)cout<<idm<<"\n";
    else cout<<"Minimum note not reached\n";
    return 0;
}
