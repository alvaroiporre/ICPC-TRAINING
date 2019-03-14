#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,d=0,t=0,c=0,ci=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x%2==0)d++;
        if(x%3==0)t++;
        if(x%4==0)c++;
        if(x%5==0)ci++;
    }
    cout<<d<<" Multiplo(s) de 2\n";
    cout<<t<<" Multiplo(s) de 3\n";
    cout<<c<<" Multiplo(s) de 4\n";
    cout<<ci<<" Multiplo(s) de 5\n";

    return 0;
}
