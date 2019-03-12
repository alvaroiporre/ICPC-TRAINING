#include <bits/stdc++.h>
using namespace std;
int main(){
    int b,m,i,j;
    long long x,y=0;
    scanf("%d %d",&m,&b);
    for(i=0;i<=b;i++){
        x=(b-i)*m;
        y=max(y,(1ll*(x+1)*(i+1)*(x+i)/2));
    }
    cout<<y<<"\n";
    return 0;
}
