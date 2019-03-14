#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>letras(30,0);
    string nombre;
    cin>>nombre;
    int tam=nombre.size();
    for(int i=0;i<tam;i++){
        letras[(int)nombre[i]-'a'+1]++;
    }

    int cont=0;
    for(int i=1;i<=27;i++){
        if(letras[i]) cont++;
    }
    sort(letras.rbegin(),letras.rend());
    if(cont>2){
        int a=0;
        for(int i=cont-1;i>=2;i--){
            a+=letras[i];
        }
        cout<<a<<endl;
    }
    else cout<<0<<endl;
    return 0;
}
