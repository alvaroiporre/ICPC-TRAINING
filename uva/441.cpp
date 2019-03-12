#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define foran(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
    int k;
    int cont=0;
    while(cin>>k&&k){
        int n[k];
        if(cont>0)cout<<"\n";
        forn(i,k)cin>>n[i];

        foran(a,0,k-5)
        foran(b,a+1,k-4)
        foran(c,b+1,k-3)
        foran(d,c+1,k-2)
        foran(e,d+1,k-1)
        foran(f,e+1,k)
            cout<<n[a]<<" "<<n[b]<<" "<<n[c]<<" "<<n[d]<<" "<<n[e]<<" "<<n[f]<<"\n";
        cont++;
    }


    return 0;
}
