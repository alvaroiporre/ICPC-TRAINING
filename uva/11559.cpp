#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pre,ho,se,prec,cam;
    while(cin>>n>>pre>>ho>>se){
        int mini=pre;
        bool posible=false;
        while(ho--){
            cin>>prec;
            for(int i=0;i<se;i++){
                cin>>cam;
                if(cam>=n&&n*prec<=pre){
                    mini=min(mini,prec*n);
                    posible=true;
                }
            }
        }
        if(posible)cout<<mini<<"\n";
        else cout<<"stay home\n";
    }

    return 0;
}




