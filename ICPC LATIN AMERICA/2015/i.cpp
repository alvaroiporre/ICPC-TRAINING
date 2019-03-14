#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    while(cin>>t){
        cin>>a>>b>>c>>d>>e;
        int s=0;
        if(t==a)s++;
        if(t==b)s++;
        if(t==c)s++;
        if(t==d)s++;
        if(t==e)s++;
        cout<<s<<endl;
    }


    return 0;
}
