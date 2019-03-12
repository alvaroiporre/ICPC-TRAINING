#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> >nums[25];
    int maxi=1,a,b;
    while(n--){
        cin>>a>>b;
        if(nums[a].size()>0){
            bool x=false;
            for(int i=0;i<nums[a].size();i++){
                if(nums[a][i].first==b){
                    nums[a][i].second++;
                    maxi=max(maxi,nums[a][i].second);
                    x=true;
                }
            }
            if(!x){
                nums[a].push_back({b,1});
            }
        }else{
            nums[a].push_back({b,1});
        }
    }
    cout<<maxi<<endl;
    return 0;
}
