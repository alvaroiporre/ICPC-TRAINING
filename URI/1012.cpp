#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3)
    <<"TRIANGULO: "<<(a*c*0.5)
    <<"\nCIRCULO: "<<(c*c*3.14159)
    <<"\nTRAPEZIO: "<<(a+b)*0.5*c
    <<"\nQUADRADO: "<<b*b
    <<"\nRETANGULO: "<<a*b<<"\n";

    return 0;
}
