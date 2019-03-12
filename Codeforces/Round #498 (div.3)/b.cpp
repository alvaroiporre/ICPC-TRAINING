#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>copia=nums;
    vector<int>div;
    sort(nums.rbegin(),nums.rend());
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
        //cout<<nums[i]<<endl;
    }
    cout<<sum<<"\n";
    int c=0,j=1;

    for(int i=0;i<n;i++){
        c++;
        if(copia[i]>=nums[k-j]&&div.size()<k){
            div.push_back(c);
            c=0;
            j++;
        }
    }
    if(c)div[k-1]+=c;
    for(int i=0;i<div.size();i++)cout<<div[i]<<" ";
    cout<<"\n";
    return 0;
}
