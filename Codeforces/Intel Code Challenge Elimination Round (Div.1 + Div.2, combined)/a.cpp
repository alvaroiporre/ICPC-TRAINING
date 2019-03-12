#include<iostream>
#include<cstdio>

using namespace std;
struct reloj{
    int hora;
    int minuto;
};

int main(){
    int horas, aux;
    reloj a;
    cin>>horas;
    scanf("%d:%d", &a.hora,&a.minuto);
    aux=a.minuto/60;
    a.minuto=a.minuto%60;
    a.hora+=horas+aux;
    if(horas==12)
        a.hora=a.hora%horas;
    if(horas==24)
        a.hora=a.hora%horas;
    cout<<a.hora<<":"<<a.minuto<<endl;


    return 0;
}
