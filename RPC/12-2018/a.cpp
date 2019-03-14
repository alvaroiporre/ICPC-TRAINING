#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    bool f=true;
    for(int i=1;i<x.size();i++){
        if(x[i-1]==x[i]){
            cout<<"Or not.\n";
            f=false;
            break;
        }
    }
    if(f)cout<<"Odd.\n";
    return 0;
}
