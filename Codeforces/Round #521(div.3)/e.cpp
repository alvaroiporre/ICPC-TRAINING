#include<bits/stdc++.h>
//not solve yet
typedef long long ll;
using namespace std;
int main(){
    int n,x;
    cin>>n;
    map<int,int>t;
    while(n--){
        cin>>x;
        t[x]++;
    }
    vector<int>a;
    for( map<int,int>::iterator it=t.begin();it!=t.end();it++){
        a.push_back(it->second);
    }
    sort(a.begin(),a.end());
    int may=a[0],s=a[0];
    for(int i=1;i<a.size()&&may;i++){
        if(a[i]>=2*a[i-1]){
            s+=2*a[i-1];
        }else{
            while(a[i]<2*a[i-1]){
                a[i-1]
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

