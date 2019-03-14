#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(c>b)cout<<":)\n";
        else{
            if(a-b>b-c)cout<<":)\n";
            else cout<<":(\n";
        }
    }else if(a<b){
        if(c<b)cout<<":(\n";
        else{
            if(b-a>c-b)cout<<":(\n";
            else cout<<":)\n";
        }
    }else{
        if(c>b)cout<<":)\n";
        else cout<<":(\n";
    }
    return 0;
}
