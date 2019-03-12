#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int,int> >a,pair<int, pair<int,int> >b){
    if(a.first==b.first)return a.second.first<b.second.first;
    return a.first<b.first;
}
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        vector<pair<int, pair<int,int> > >tre;
        for(int i=-100;i<=100;i++){
            for(int j=-100;j<=100;j++){
                for(int k=-100;k<=100;k++){
                    if(i+j+k==a&&(i*j*k==b)&&(i*i+j*j+k*k==c)&&i!=j&&j!=k&&i!=k){
                        //cout<<i<<" "<<j<<" "<<k<<"\n";
                        tre.push_back({i,{j,k}});
                    }
                }
            }
        }
        if(tre.size()>0){
            sort(tre.begin(),tre.end(),cmp);
            //cout<<"///////";
            cout<<tre[0].first<<" "<<tre[0].second.first<<" "<<tre[0].second.second<<"\n";
        }else{
            cout<<"No solution.\n";
        }
    }
    return 0;
}

