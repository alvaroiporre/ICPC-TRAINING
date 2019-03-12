#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long tw[n];
    long long mini=1000009;
    long long maxi=-1;
    vector<long long>cb(1000009,0);
    for(long long i=0;i<n;i++){
        cin>>tw[i];
        mini=min(tw[i],mini);
        maxi=max(tw[i],maxi);
        cb[tw[i]]++;
    }
    long long l=0;
    int st=0;
    while(maxi>mini){
        long long cut=0;
        while(cut+cb[maxi]+l<=k){
            l+=cb[maxi--];
            cut+=l;
        }
        //cout<<cut<<endl;
        st++;
    }
    cout<<st<<endl;

    return 0;
}
