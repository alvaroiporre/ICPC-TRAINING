#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(k>n){
        cout<<"NO\n";
        return 0;
    }
    if(k==1){
        int j=int(log2(n));
        if(1<<j==n)cout<<"YES\n"<<n<<"\n";
        else cout<<"NO\n";
        return 0;
    }
    vector<int>resp;
    for(int i=0;i<31;++i){
        if((1<<i)&n)resp.push_back((1<<i));
    }
    int j=0;
    if(resp.size()>k){
        cout<<"NO\n";
        return 0;
    }
    if(n==k){
        cout<<"YES\n";
        for(int i=0;i<k;++i){
            cout<<"1 ";
        }
        return 0;
    }
    while(resp.size()<k&&j!=resp.size()){
        if(resp[j]>1){
            resp[j]/=2;
            resp.push_back(resp[j]);
        }else{
            j++;
        }
    }
    if(resp.size()==k){
        cout<<"YES\n";
        sort(resp.begin(),resp.end());
        for(int i=0;i<k;++i){
            cout<<resp[i]<<" ";
        }
    }else cout<<"NO\n";

    return 0;
}
