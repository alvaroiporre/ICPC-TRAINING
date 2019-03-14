#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n;
    vector<long long> num;
    while(n--){
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());
    long long mini=num[0];
    for(long long i=0;i<num.size();i++){
        num[i]+=mini;
    }
    for(long long i=0;i<num.size();i++){
        cout<<num[i]<<"\n";
    }


    return 0;
}
