#include<bits/stdc++.h>
using namespace std;
bool comp(long long a,long long b){
    long long r=(1LL<<(b))-1;
    while(r<=a){
        if(r&a==r)return true;
        r<<=1;
    }
    return false;
}
int main(){
    long long n,k;
    while(cin>>n>>k){
        if(comp(n,k))cout<<n<<endl;
        else{
            long long u=1LL<<60;
            long long r=(1LL<<k)-1;
            long long mini=u;
            long long i=0;
            long long y=n;
            while((r|n)<u){
                n>>=i;
                n<<=i;
                i++;
                if((r|n)>=y)mini=min(mini,(r|n));
                if((r|y)>=y)mini=min(mini,(r|y));
                if(r>=y)mini=min(mini,r);
                r<<=1;
            }
            cout<<mini<<endl;
        }
    }
    return 0;
}
