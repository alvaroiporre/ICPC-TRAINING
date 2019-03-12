#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,m1;
    scanf("%d:%d %d",&h,&m,&m1);
    m+=m1;
    h+=(m/60);
    m%=60;
    h%=24;
    if(h<10)cout<<"0";
    cout<<h<<":";
    if(m<10)cout<<"0";
    cout<<m<<"\n";
    return 0;
}
