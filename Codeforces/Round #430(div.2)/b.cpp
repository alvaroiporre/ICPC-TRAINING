#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,d,x,y,r1,n;
    cin>>r>>d>>n;
    int c=0;
    while(n--){
        cin>>x>>y>>r1;
        double d0=sqrt(x*x+y*y);
        if((double((d0-(r-d)))>=(double)r1)&&(double)(d0+r1)<=(double)r)c++;
    }
    cout<<c<<"\n";
    return 0;
}
