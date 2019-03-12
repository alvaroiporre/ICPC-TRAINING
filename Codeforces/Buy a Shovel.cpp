#include<bits/stdc++.h>

using namespace std;

int main(){
    int k, r, u, i=1;
    cin>>k>>r;
    u=k;
    while(u%10!=0&&(u-r)%10!=0){
        u=k*i;
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}
