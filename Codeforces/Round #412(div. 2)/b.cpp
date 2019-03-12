
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s,x,y, h0=0,h1=0;
    vector<int>win(501,0);
    cin>>n>>x>>y;
    i=(x/50)%475;
    s=25;
    while(s--){
        i=(i*96+42)%475;
        win[i]=1;
    }
    if(win[n]) cout<<h1<<endl;
    else{

    }
    return 0;
}
