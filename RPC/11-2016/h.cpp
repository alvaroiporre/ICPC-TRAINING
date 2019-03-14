#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string cadena, aux="";

    cin>>cadena;
    int i, t;
    t=cadena.length();
    for(i=0;i<t;i++){
        if(cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u')
            aux+=cadena.substr(i,1);
    }
    cadena=aux;
    reverse(aux.begin(),aux.end());
    if(cadena==aux) cout<<"S\n";
    else cout<<"N\n";
    return 0;

}
