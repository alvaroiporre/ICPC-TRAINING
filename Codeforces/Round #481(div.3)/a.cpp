#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    int nums[1001]={0};
    vector<int>nu;
    cin>>n;
    int c=0;
    while(n--){
        cin>>a;
        if(nums[a]==0)c++;
        nums[a]++;
        nu.push_back(a);
    }
    cout<<c<<"\n";
    for(int i=0;i<nu.size();i++){
        if(nums[nu[i]]==1){
            cout<<nu[i]<<" ";
        }
        else nums[nu[i]]--;
    }
    cout<<"\n";
    return 0;
}
