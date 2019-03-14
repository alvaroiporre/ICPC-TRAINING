#include <iostream>

using namespace std;


struct Diccionario{
    string palabra;
    string buscar;
}pal[100];

int Busca(string bus2, int n){
    int cont=0;
    bool ban;
    string pal2="";
    for(int j=0;j<n;j++){
        pal2="";
        pal2=pal2+pal[j].palabra;
        if(bus2.length()==pal2.length()){
            ban=true;
            for(int k=0;k<bus2.length();k++){
                if(pal2[k]==bus2[k]||bus2[k]=='-'){
                }
                else{
                    ban=false;
                    break;
                }
            }
            if(ban){
                cout<<pal2<<endl;
                cont=cont+1;
            }
        }
    }
    return cont;
}
int main()
{
    int cont;
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>pal[i].palabra;
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>pal[i].buscar;
        }
        string bus2="";
        for(int i=0;i<m;i++){
            cout<<"Word #"<<i+1<<": "<<pal[i].buscar<<endl;
            bus2=bus2+pal[i].buscar;
            cont=Busca(bus2,n);
            cout<<"Total number of candidate words = "<<cont<<endl;
            bus2="";
        }
    }
    return 0;
}
