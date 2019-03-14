#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,d;
    while(cin>>x>>y>>z&&x!=0&&y!=0&&z!=0){
        d=pow((x*y*z),(double)1/3.0);
        cout<<d<<endl;
    }

    return 0;
}
