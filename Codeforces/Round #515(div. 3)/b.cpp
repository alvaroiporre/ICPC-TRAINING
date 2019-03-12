#include<bits/stdc++.h>
using namespace std;
//no solution
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second-a.first>b.second-b.first)return true;
    if(a.second-a.first==b.second-b.first)return a.second<b.first;
    return a.first<b.first;
}
int main(){
    int n,r;
    cin>>n>>r;
    vector<pair<int,int> >t;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        if(c==1){
            int mini=max(i-r+1,1);
            int maxi=min(i+r-1,n);
            t.push_back({mini,maxi});
        }
    }
    if(t.size()==0){
        cout<<"-1\n";
        return 0;
    }
    sort(t.begin(),t.end(),cmp);
    int mini=1,maxi=n;
    for(int i=0;i<t.size();i++){

    }

    return 0;
}

