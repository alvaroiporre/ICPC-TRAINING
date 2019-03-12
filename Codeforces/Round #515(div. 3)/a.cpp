#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long L,v,l,r;
        cin>>L>>v>>l>>r;
        long long cont=L/v;
        if(l%v==0&&v!=1)l--;
        long long men=r/v-l/v;
        if(v==1)cont=L-(r-l+1);
        else if(v>L)cont=0;
        else cont-=men;
        cout<<cont<<endl;
    }
    return 0;
}
