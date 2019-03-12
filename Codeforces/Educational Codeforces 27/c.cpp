#include<bits/stdc++.h>
#define MAX 100000009
using namespace std;
int main(){
    int n,a,b;
    vector<int>p(MAX,0);
    vector<int>p1(MAX,0);
    cin>>n;
    bool yes=true;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a<MAX)p[a]++;
        else p1[a%MAX]++;
        if(b<MAX)p[b]++;
        else p1[b%MAX]++;
        if(p[a]>2||p[b]>2||p1[a%MAX]>2||p1[b%MAX]>2)yes=false;
    }
    if(yes)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
