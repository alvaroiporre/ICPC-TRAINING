#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x=0,d;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        if(a=="donate"){
            cin>>d;
            x+=d;
        }else{
            cout<<x<<endl;
        }
    }
    return 0;
}
