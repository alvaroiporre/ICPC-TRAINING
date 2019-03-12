#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,m;
    cin>>n>>k;
    m=n/2;
    while(m){

        if(m%(k+1)==0){
            long long u=m/(k+1);
            cout<<u<<" "<<k*u<<" "<<n-((k+1)*u)<<"\n";
            return 0;
        }else{
            m--;
        }
    }
    cout<<0<<" "<<0<<" "<<n<<"\n";
    return 0;
}
