#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,l;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<string>pal;
        bool ex[n];
        memset(ex,false,n);
        string p;
        while(n--){
            cin>>p;
            pal.push_back(p);
        }
        while(k--){
            cin>>l;
            while(l--){
                cin>>p;
                for(int i=0;i<pal.size();i++){
                    if(p==pal[i])ex[i]=true;
                }
            }
        }
        for(int i=0;i<pal.size();i++){
            cout<<((ex[i])?"YES ":"NO ");
        }
        cout<<"\n";
    }
    return 0;
}
