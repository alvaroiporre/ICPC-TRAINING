#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t&&t){
        vector<int>valla(t);
        bool yes=false;
        int cont=0,aux=0,in=0;
        for(int i=0;i<t;i++){
            cin>>valla[i];
            if(valla[i]==0&&!yes){
                in++;
            }else if(valla[i]==0){
                aux++;
            }else{
                yes=true;
                if(aux>1){
                    aux=aux*2+1;
                    cont+=(aux/4);
                }
                aux=0;
            }
        }
        if(!yes)in++;
        if(aux>0){
            aux=(aux+in)*2+1;
            cont+=(aux/4);
        }else{
            if(in>0){
                cont+=((in*2)+1)/4;
            }
        }
        cout<<cont<<"\n";
    }

    return 0;
}
