#include<bits/stdc++.h>
using namespace std;
int main(){
    int cont=0,n,m;
    while(cin>>n&&n){
        cont++;
        int nums[n];
        for(int i=0;i<n;i++)cin>>nums[i];
        cin>>m;
        cout<<"Case "<<cont<<":\n";
        while(m--){
            int x;
            cin>>x;
            int maxi=nums[0]+nums[1];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(abs(nums[i]+nums[j]-x)<=abs(maxi-x)){
                        maxi=nums[i]+nums[j];
                        //cout<<"////////////"<<maxi<<endl;
                    }
                }
            }
            cout<<"Closest sum to "<<x<<" is "<<maxi<<".\n";
        }
    }

    return 0;
}
