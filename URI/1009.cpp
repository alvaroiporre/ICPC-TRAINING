#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    float s, v;
    cin>>s>>v;
    //b=v*0.15;
    cout<<"TOTAL = R$ ";
    cout<<fixed<<setprecision(2)<<s+v*0.15<<endl;
    return 0;
}


