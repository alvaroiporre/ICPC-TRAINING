#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    vector<int> nums[n+1];
    for(int i=1;i<=n;++i){
        cin>>a>>b;
        nums[i].push_back(a);
        nums[i].push_back(b);
    }
    vector<int>resp;
    resp.push_back(1);
    int k=0;
    while(resp.size()<n){
        int a=nums[resp[k]][0],b=nums[resp[k]][1];
        if(nums[a][0]==b||nums[a][1]==b)resp.push_back(a);
        else resp.push_back(b);
        k++;
    }
    for(int i=0;i<n;i++)cout<<resp[i]<<" ";
    cout<<"\n";
    return 0;
}
