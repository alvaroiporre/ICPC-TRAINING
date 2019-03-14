#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    vector<int>num;
    while(n>0){
        num.push_back(n%10);
        n/=10;
    }
    int exp=1;
    int n1=0;
    sort(num.rbegin(),num.rend());
    for(int i=0;i<num.size();i++){
        n1=n1+num[i]*exp;
        exp*=10;
    }
    return n1;
}
int main(){
    int n;
    while(cin>>n){
        int p=0;
        while(n>0){
            p++;
            int u=convert(n);
            //cout<<u<<endl;
            n-=u;
        }
        cout<<p<<endl;
    }

    return 0;
}
