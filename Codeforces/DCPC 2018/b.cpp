#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s=0,i,j;
    cin>>n;
    long long num[n+1];
    for(i=0;i<n;i++){
        cin>>num[i];
        s+=num[i];
        num[i]=s;
    }
    //cout<<"s  "<<s<<endl;
    for(i=1;i<n;i++){
        s+=num[i];
        //cout<<"0  "<<num[h]<<endl;
    }

    for(i=1;i<n-1;i++){
        for(j=i+1;j<n;j++){
            s+=(num[j]-num[i-1]);
            //cout<<"n  "<<num[j]-num[i-1]<<endl;
        }
    }
    cout<<s<<endl;
    return 0;
}
