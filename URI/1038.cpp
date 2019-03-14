#include <bits/stdc++.h>
using namespace std;

int main(){
    float a[5]={4.00,4.50,5.00,2.00,1.50}, b;
    int n;
    cin>>n>>b;
    b*=a[n-1];
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<b<<endl;
    return 0;
}

