#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    string cad;
    while(cin>>a>>b>>cad){
        long long j=cad.size()-1, cost=0,nb=0,nw=0;
        for(int k=0;k<=j;k++){
            if(cad[k]=='B')nb++;
        }
        for(int k=0;k<nb;k++){
            if(cad[k]=='W')nw++;
        }
        cost=nw*a;
        if(cad[nb-1]=='W'&&cad[nb]=='B'&&nb<j&&cost>b)cost-=b;
        cout<<cost<<endl;
    }
    return 0;
}
