#include<bits/stdc++.h>
using namespace std;
int main(){
    string h;
    int c=1;
    while(cin>>h&&h!="#"){
        cout<<"Case "<<c<<": ";
        if(h=="HOLA")cout<<"SPANISH\n";
        else if(h=="HELLO")cout<<"ENGLISH\n";
        else if(h=="HALLO")cout<<"GERMAN\n";
        else if(h=="BONJOUR")cout<<"FRENCH\n";
        else if(h=="CIAO")cout<<"ITALIAN\n";
        else if(h=="ZDRAVSTVUJTE")cout<<"RUSSIAN\n";
        else cout<<"UNKNOWN\n";
        c++;
    }
    return 0;
}
