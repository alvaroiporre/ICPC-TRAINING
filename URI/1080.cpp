#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,m=-1,ind=0;
    for(int i=1;i<11;i++){
        cin>>a;
        if(a>m){
            m=a;
            ind=i;
        }
    }
    cout<<m<<endl;
    cout<<ind<<endl;
    return 0;
}

