
#include <bits/stdc++.h>
using namespace std;
int main(){
    string g;
    bool x=false;
    while(getline(cin,g)){
        for(int i=0;i<g.size();i++){
            if(g[i]=='"'){
                if(!x){
                    x=true;
                    cout<<"``";
                }else{
                    x=false;
                    cout<<"''";
                }
            }else{
                cout<<g[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
