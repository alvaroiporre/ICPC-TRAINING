#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>a;
            if(a==1)cout<<"Rolien\n";
            else if(a==2)cout<<"Naej\n";
            else if(a==3)cout<<"Elehcim\n";
            else cout<<"Odranoel\n";
        }
    }

    return 0;
}
