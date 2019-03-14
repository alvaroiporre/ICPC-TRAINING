#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    if(a%2==b%2){
        if(a%2==0)return a<b;
        return a>b;
    }
    return a%2==0;
}
int main(){
    int  n,x;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
        //num.push_back(x);
    }
    sort(num.begin(),num.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<num[i]<<"\n";
    return 0;
}
