#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        bool f=true;
        if(m>0){
        vector<pair<int,int> > c(m,{-1,-1});
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
               cin>>x;
               if(x==1){
                    if(c[j].first==-1)c[j].first=i+1;
                    else if(c[j].second==-1)c[j].second=i+1;
                    else f=false;

               }
            }
        }
        sort(c.begin(),c.end());
        for(int j=0;j<m;++j)if(c[j].second==-1||c[j].first==-1)f=false;//cout<<c[j].first<<" "<<c[j].second<<">>\n";
        for(int j=1;j<m;++j)if(c[j-1].first==c[j].first&&c[j-1].second==c[j].second){
            f=false;
            break;
        }
        }
        cout<<(f?"Yes\n":"No\n");
    }

    return 0;
}
