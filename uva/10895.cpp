#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,u,b;
    //freopen("myfile.txt","w",stdout);
    while(cin>>m>>n){
        vector<pair<int,int> >nums[n+1];
        for(int i=0;i<m;++i){
            cin>>u;
            int ns[u];
            for(int j=0;j<u;++j)cin>>ns[j];
            for(int j=0;j<u;++j){
                cin>>b;
                nums[ns[j]-1].push_back({i+1,b});
            }
        }
        cout<<n<<" "<<m<<"\n";
        for(int i=0;i<n;++i){
            u=nums[i].size();
            cout<<u;
            if(u>0)cout<<" ";
            for(int j=0;j<u;++j)cout<<nums[i][j].first<<(j+1==u?"":" ");
            cout<<"\n";
            for(int j=0;j<u;++j)cout<<nums[i][j].second<<(j+1==u?"":" ");
            cout<<"\n";
        }
    }
    return 0;
}
