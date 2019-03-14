#include<bits/stdc++.h>
using namespace std;

int main(){
    double x,y=0;
    int cont=0;
    while(cin>>x&&x>=0){
        y+=x;
        cont++;
    }
    y=y/(double)cont;
    cout<<fixed<<setprecision(2)<<y<<endl;

    return 0;
}
