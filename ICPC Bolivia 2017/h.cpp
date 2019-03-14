#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    while(cin>>n>>s){
        int nums[n+1];
        nums[0]=0;
        for(int i=1;i<=n;i++){
            cin>>nums[i];
            nums[i]+=nums[i-1];
        }
        bool flag=false;
        for(int i=0,j=1;j<=n&&i<n;){
            if(nums[j]-nums[i]==s){
                cout<<i+1<<" "<<j<<endl;
                flag=true;
                break;
            }else{
                if(nums[j]-nums[i]>s)i++;
                else j++;
            }
        }
        if(!flag)cout<<-1<<endl;
    }
    return 0;
}
