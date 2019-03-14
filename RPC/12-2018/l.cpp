#include<bits/stdc++.h>
using namespace std;
int main(){
    double k,p,x;
    cin>>k>>p>>x;
    double n=sqrt(k*p/x);
    double mini=min(x*floor(n)+k*p/floor(n),x*ceil(n)+k*p/ceil(n));
    cout<<fixed<<setprecision(3)<<mini<<endl;
    return 0;
}
