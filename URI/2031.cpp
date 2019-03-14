#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x=="pedra"){
            if(y=="pedra"){
                cout<<"Sem ganhador\n";
            }else if(y=="ataque"){
                cout<<"Jogador 2 venceu\n";
            }else{
                cout<<"Jogador 1 venceu\n";
            }
        }else if(x=="ataque"){
            if(y=="pedra"){
                cout<<"Jogador 1 venceu\n";
            }else if(y=="ataque"){
                cout<<"Aniquilacao mutua\n";
            }else{
                cout<<"Jogador 1 venceu\n";
            }
        }else{
            if(y=="pedra"){
                cout<<"Jogador 2 venceu\n";
            }else if(y=="ataque"){
                cout<<"Jogador 2 venceu\n";
            }else{
                cout<<"Ambos venceram\n";
            }
        }
    }
    return 0;
}
