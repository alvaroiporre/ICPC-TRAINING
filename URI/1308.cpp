#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        double x=(sqrt(1+8*n)-1)/2;
        cout<<(long long)x<<"\n";
    }
    return 0;
}
