#include<bits/stdc++.h>
using namespace std;
long long binary_exp(int a,int b, int c){
    if (b == 0)return 1;
    if (b % 2 == 0){
        int temp = binary_exp(a,b/2, c);
        return ((long long)(temp) * temp) % c;
    }else{
        int temp = binary_exp(a, b-1, c);
        return ((long long)(temp) * a) % c;
    }
}
int main(){
    int t;
    int x,y,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        cout<<binary_exp(x,y,n)<<"\n";
    }
    cin>>t;
    return 0;
}

