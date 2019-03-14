#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    string x;
    while(cin>>x&&x!="0"){
        t=1;
        for(int i=1;i<=x.length();i++){
            t*=i;
        }
        cout<<t<<"\n";
    }
    return 0;
}
