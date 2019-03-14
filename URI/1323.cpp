#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        long long res=0;
        for(int i=1;i<=n;i++){
            res+=(i*i);
        }
        cout<<res<<"\n";
    }

}
