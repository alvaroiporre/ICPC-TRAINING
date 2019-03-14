#include <iostream>

using namespace std;
int main(){
    int x=1;
    string num,cad;
    while(cin>>num){
        cin.ignore();
        getline(cin,cad);
        if(x>1)cout<<"\n";//salto de linea adicional
        int f=0,m=0;
        for(int i=0;i<cad.size();i+=5){
            //cout<<">>>"<<cad.substr(i,2)<<endl;
            if(cad.substr(i,2)==num){
                if(cad[i+3]=='F')f++;
                else m++;
            }
        }
        cout<<"Caso "<<x<<":\n";
        cout<<"Pares Iguais: "<<m+f<<"\n";
        cout<<"F: "<<f<<"\n";
        cout<<"M: "<<m<<"\n";
        x++;
    }
    return 0;
}
