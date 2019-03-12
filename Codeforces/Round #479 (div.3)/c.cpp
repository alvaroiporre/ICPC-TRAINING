#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a;
    vector<int>nums;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(),nums.end());
    if(k==0){
        if(nums[0]==1)cout<<"-1\n";
        else cout<<nums[0]<<"\n";
    }else{
        if(n==1){
            cout<<nums[0]<<"\n";
        }else{
            if(nums[k-1]==nums[k])cout<<"-1\n";
            else cout<<nums[k-1]<<"\n";
        }
    }
    return 0;
}
