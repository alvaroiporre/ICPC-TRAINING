#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k;
    while(cin>>k){
    vector< pair<long long, long long> > d;
        for(long long i=k+1;i<=2*k;i++){
            if((k*i)%(i-k)==0)d.push_back({(k*i)/(i-k),i});
        }
        cout<<d.size()<<endl;
        for(long long i=0;i<d.size();i++){
            cout<<"1/"<<k<<" = 1/"<<d[i].first<<" + 1/"<<d[i].second<<"\n";
        }
    }
    return 0;
}
