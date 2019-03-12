#include<bits/stdc++.h>
using namespace std;
long long binaryExp(int a, int b){
    if (b == 0)return 1;
    if (b % 2 == 0){
        long long temp = binaryExp(a,b/2);
        return ((long long)(temp) * temp);
    }
    long long temp = binaryExp(a, b-1);
    return ((long long)(temp) * a);
}

long long sol(long long x){
    if(x<=0)return 0;
    if(x==1)return 1;
    int xa=log2(x);
    long long exp=binaryExp(2,xa);

    long long c=(exp*xa)/2;
    return c+x-(exp-1)+sol(x-exp);
}
int main(){
    long long a,b;

    while(cin>>a>>b){
        long long xa,xb;
        //xa=dig(a);
        xa=sol(a-1);
        xb=sol(b);
        cout<<xb-xa<<"\n";
    }

    return 0;
}
