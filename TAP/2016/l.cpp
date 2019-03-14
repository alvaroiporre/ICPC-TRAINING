#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
using namespace std;
int main(){
    int n,k;
    while(cin>>n>>k){
        int lig[k+1];
        int may=-1,im=0;
        bool ok=true;
        forn(i,k){
            cin>>lig[i];
            if(lig[i]>may){
                may=lig[i];
                im=i;
            }
        }
        if(im>0&&im<k-1&&lig[im-1]==lig[im+1])ok=false;
        if(ok&&im>0)forn(i,im){
            if(!(lig[i]+1==lig[i+1]||lig[i]+2==lig[i+1])||lig[i+1]<3){
                ok=false;
                break;
            }
        }
        if(ok&&im<k-1)forsn(i,im,k-1){
            if(!(lig[i]==lig[i+1]+2||lig[i]==lig[i+1]+1)||lig[i]<3){
                ok=false;
                break;
            }
        }
        cout<<(ok?"S\n":"N\n");
    }
    return 0;
}
