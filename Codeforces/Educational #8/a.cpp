#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,p,b1=0;
    cin>>n>>b>>p;
    p*=n;
    while(n>1){
        int j=1;
        while(1<<(j+1)<=n)j++;
        n=n-(1<<j)+(1<<(j-1));
        b1+=((1<<j)*b+(1<<(j-1)));
    }
    cout<<b1<<" "<<p<<"\n";
    return 0;
}
