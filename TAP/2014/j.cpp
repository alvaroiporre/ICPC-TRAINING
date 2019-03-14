#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>nums;
    nums.insert(n);
    int m[n+1];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    for(int i=n-2;i>0;i--){
        int j=i;
        while(j<=n){
            if(j==n){
                nums.insert(i);
                break;
            }
            j+=(m[j]+1);
        }
    }
    for(set<int>::iterator it=nums.begin();it!=nums.end();it++)cout<<*it<<endl;

    return 0;
}
