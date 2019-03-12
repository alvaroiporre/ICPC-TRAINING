
#include<bits/stdc++.h>
//not solve yet
typedef long long ll;
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k;
    map<int,int>r;
    for(int i=0;i<n;i++){
        cin>>x;
        r[x]++;
    }
    vector<pair<int, int> >o;
    for(map<int,int>::iterator it=r.begin();it!=r.end();it++){
        o.push_back({it->second,it->first});
    }
    sort(o.rbegin(),o.rend());


    return 0;
}
