#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++){
        if(x.substr(i,3)=="RBL"||x.substr(i,3)=="RLB"||x.substr(i,3)=="LBR"||
           x.substr(i,3)=="LRB"||x.substr(i,3)=="BRL"||x.substr(i,3)=="BLR"){
            cout<<"C";
            i+=2;
           }
        else{
            if(x[i]=='R')cout<<"S";
            else if(x[i]=='B')cout<<"K";
            else cout<<"H";
        }

    }
    cout<<"\n";
    return 0;
}
