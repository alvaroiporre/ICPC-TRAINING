#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int let[28]={0};
    for(int i=0;i<s.size();i++){
        let[s[i]-'a']++;
    }
    for(int i=0;i<28;i++){
        if(let[i]>k){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
