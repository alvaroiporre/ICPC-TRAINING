#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i=1;
    cin>>n;


    while(i*(i+1)/2<n)i++;
    long long u=i*(i+1)/2;
    //cout<<i<<endl;
    cout<<((n-u==0)?i:i-u+n);
    cout<<"\n";
    return 0;
}
