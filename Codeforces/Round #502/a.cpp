#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
int main(){
    int n,a,b,c,d;
    cin>>n;
    vector<pair<int,int> >t;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        t.push_back({a+b+c+d,i+1});
    }
    sort(t.begin(),t.end(),comp);
    for(int i=0;i<n;i++){
        if(t[i].second==1){
            cout<<i+1<<endl;
        }
    }
    return 0;
}
