#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,x;
    cin>>n>>m;
    vector<long long> dor;
    dor.push_back(0);
    for(int i=0;i<n;i++){
        cin>>x;
        dor.push_back(x+dor[i]);
    }
    int j=1;
    for(int i=0;i<m;i++){
        cin>>x;
        while(true){
        if(x<=dor[j]){
            cout<<j<<" "<<x-dor[j-1]<<"\n";
            break;
        }else j++;
        }
    }
    return 0;
}

