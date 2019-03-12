#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c;
    string x;
    cin>>t;
    while(t--){
        cin>>x;
        c=x.length();
        if(x[c-1]=='5')cout<<"-\n";
        else if(x[0]=='9'&&x[c-1]=='4')cout<<"*\n";
        else if(x[0]=='1'&&c>3)cout<<"?\n";
        else cout<<"+\n";

    }
    return 0;
}
