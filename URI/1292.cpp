#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,h,l;
    while(cin>>n){
        h=(sin((108*3.14159265358979323846)/180) / sin((63*3.14159265358979323846)/180));
        l=h*n;
        cout<<fixed<<setprecision(10)<<l<<endl;
    }

    return 0;
}
