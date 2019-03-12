#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string u="";
        int nu[26]={0};
        int v=0,d=0,e=0;
        while(cin>>u&&u[0]!='*'){
            nu[int(u[1]-'A')]=1;
            nu[int(u[3]-'A')]=1;
            e++;
        }
        cin>>u;
        for(int i=0;i<u.size();i+=2){
            if(nu[int(u[i]-'A')]==0)d++;
            v++;
        }
        cout<<"There are "<<v-e-d<<" tree(s) and "<<d<<" acorn(s).\n";
    }
    return 0;
}
