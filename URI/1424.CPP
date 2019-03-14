#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int l[n];
        int a,b;
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        while(m--){
            int c=0,ind;
            cin>>a>>b;
            bool yes=false;
            for(int i=0;i<n;i++){
                if(l[i]==b){
                    c++;
                    if(c==a){
                        ind=i+1;
                        yes=true;
                        break;
                    }
                }
            }
            if(yes)cout<<ind<<"\n";
            else cout<<"0\n";
        }
    }

    return 0;
}
