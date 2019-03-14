#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int y;
    while(cin>>x>>y){
    if(x.size()>3){
    int m=x.size()%3;
    if(m==0)m=3;
    cout<<"$"<<x.substr(0,m)<<",";
    for(int i=m;i<x.size()-2;i+=3){
        cout<<x.substr(i,3);
        if(i+3<x.size())cout<<",";
    }
    }
    if(y>9)cout<<"."<<y<<"\n";
    else cout<<".0"<<y<<"\n";
    }
    return 0;
}
