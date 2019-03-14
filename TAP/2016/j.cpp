#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define dforn(i,n) for(int i=int(n)-1;i>=0;i--)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
using namespace std;
int main(){
    int n,l,c;
    while(cin>>n>>l>>c){
        vector<int>pal(n);
        forn(i,n)cin>>pal[i];
        sort(rall(pal));
        int j=0;
        bool ok=true;
        while(j<n){
            c-=pal[j];
            j+=l;
            if(c<0){
                ok=false;
                break;
            }
        }
        cout<<(ok?"S\n":"N\n");
    }
    return 0;
}
