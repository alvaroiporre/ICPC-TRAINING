#include<bits/stdc++.h>
using namespace std;
int main(){
    double r,v,a,h;
    while(cin>>v>>r){
        r/=2;
        a=3.14*r*r;
        h=v/a;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }


    return 0;
}
