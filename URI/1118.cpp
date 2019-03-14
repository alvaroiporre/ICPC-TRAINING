
#include <bits/stdc++.h>

using namespace std;

int main(){
    float n1,n2;
    int o;
    bool x=true;
    while(x){
        while(cin>>n1&&(n1<0||n1>10)){
            cout<<"nota invalida\n";
        }
        while(cin>>n2&&(n2<0||n2>10)){
            cout<<"nota invalida\n";
        }
        cout<<fixed<<setprecision(2)<<"media = "<<(n1+n2)/2;
        cout<<"\nnovo calculo (1-sim 2-nao)\n";
        while(cin>>o&&o!=1){
            if(o==2){
                x=false;
                break;
            }
            cout<<"novo calculo (1-sim 2-nao)\n";
        }
    }
    return 0;
}
