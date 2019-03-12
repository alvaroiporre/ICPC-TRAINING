#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=i+1;nums[j]<=nums[i]*2;j++){
            x++;
        }
        maxi=max(maxi,x);
    }
    cout<<maxi<<endl;
    return 0;
}
