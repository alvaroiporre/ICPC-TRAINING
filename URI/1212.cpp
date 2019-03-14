#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,x,y,z,t;
    while(cin>>a>>b){
        if(a==0&&b==0)break;
        z=t=0;
        while(1){
            x=a%10;
            y=b%10;
            a/=10;
            b/=10;
            if(x+y+z>9){
                t++;
                z=1;
            }else{
                z=0;
            }
            if(a==0&&b==0)break;
        }
        if(t>1)cout<<t<<" carry operations.\n";
        else if(t==1)cout<<t<<" carry operation.\n";
        else cout<<"No carry operation.\n";
    }
    return 0;
}
