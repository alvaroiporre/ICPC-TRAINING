#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}
int main(){
    int u=0;
    string x;
    while(cin>>x){
        if(u>0)cout<<"\n";
        vector<int>let(100,0);
        for(int i=0;i<x.size();i++){
            let[(int)(x[i]-'!')]++;
        }
        vector<pair<int,int>>l;
        for(int i=0;i<97;i++){
            if(let[i]>0)l.push_back(make_pair(let[i],i+(int)'!'));
        }
        sort(l.begin(),l.end(),cmp);
        for(int i=0;i<l.size();i++){
            cout<<l[i].second<<" "<<l[i].first<<"\n";
        }
        u++;
    }
    return 0;
}
