#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    vector<pair<int,pair<int,int> > >t;
    int pge=0,pgi=0,g=0;
    for(int i=0;i<n;i+=2){
        t.push_back({nums[i+1]-nums[i],{nums[i+1],nums[i]}});
        pge+=nums[i+1];
        pgi+=nums[i];
    }
    if(pge>pgi){
    sort(t.begin(),t.end());
    for(int i=0;i<n/2;i++){
        if(pge-t[i].second.first+t[i].second.second>pgi-t[i].second.second+t[i].second.first){
            pge+=(-t[i].second.first+t[i].second.second);
            pgi+=(-t[i].second.second+t[i].second.first);
            g++;
        }else{
            break;
        }
    }
    cout<<g<<"\n";
    }else cout<<"-1\n";
    return 0;
}
