#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>cod(100,"");
    cod[61]="Brasilia";
    cod[71]="Salvador";
    cod[11]="Sao Paulo";
    cod[21]="Rio de Janeiro";
    cod[32]="Juiz de Fora";
    cod[19]="Campinas";
    cod[27]="Vitoria";
    cod[31]="Belo Horizonte";
    int n;
    cin>>n;
    cout<<(cod[n]!=""&&n<100?cod[n]:"DDD nao cadastrado")<<endl;

    return 0;
}
