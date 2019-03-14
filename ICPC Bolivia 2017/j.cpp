#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    int nums[100000];
    nums[1]=1;
    nums[2]=2;
    nums[3]=4;
    for(int i=4;i<100000;i++){
        nums[i]=nums[i-1]+3;
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<nums[n]<<endl;
    }


}
