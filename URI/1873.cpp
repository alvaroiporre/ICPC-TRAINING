#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        string a, b;
        cin>>a>>b;
        if(a==b)cout<<"empate\n";
        else if((a=="tesoura"&&b=="papel")||
                (a=="papel"&&b=="pedra")||
                (a=="pedra"&&b=="lagarto")||
                (a=="lagarto"&&b=="spock")||
                (a=="spock"&&b=="tesoura")||
                (a=="tesoura"&&b=="lagarto")||
                (a=="lagarto"&&b=="papel")||
                (a=="papel"&&b=="spock")||
                (a=="spock"&&b=="pedra")||
                (a=="pedra"&&b=="tesoura"))cout<<"rajesh\n";
        else cout<<"sheldon\n";

    }

    return 0;
}
