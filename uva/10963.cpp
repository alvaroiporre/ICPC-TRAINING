#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,cont=0;
    scanf("%d\n",&e);
    while(cont<e){
        scanf("%d",&c);
        c--;
        if(cont>0)cout<<endl;
        cin>>a>>b;
        d=a-b;
        bool ver=true;
        while(c--){
            cin>>a>>b;
            if(a-b!=d) ver=false;
        }

        if(ver)cout<<"yes\n";
        else cout<<"no\n";
        cont++;
    }
    return 0;
}
