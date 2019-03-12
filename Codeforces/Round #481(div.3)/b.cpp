#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cont=0,cont2=0;
    string u;
    bool flag=false;
    cin>>n>>u;
    for(int i=0;i<n;i++){
        if(u[i]=='x'){
            if(flag){
                cont2++;
            }else{
                cont2=1;
                flag=true;
            }
        }else{
            if(flag){
                if(cont2>2)cont+=(cont2-2);
                flag=false;
            }
        }
    }
    if(flag&&cont2>2)cont+=(cont2-2);
    cout<<cont<<endl;
    return 0;
}
