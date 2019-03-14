
#include<bits/stdc++.h>
using namespace std;
int main(){

    string x;
    while(getline(cin,x)){
    for(int i=0;i<x.size();i++){
        if(x[i]=='A'||x[i]=='Q'||x[i]=='Z'||x[i]==' ')cout<<x[i];
        else{
            if(x[i]=='W')cout<<"Q";
            else if(x[i]=='E')cout<<"W";
            else if(x[i]=='R')cout<<"E";
            else if(x[i]=='T')cout<<"R";
            else if(x[i]=='Y')cout<<"T";
            else if(x[i]=='U')cout<<"Y";
            else if(x[i]=='I')cout<<"U";
            else if(x[i]=='O')cout<<"I";
            else if(x[i]=='P')cout<<"O";
            else if(x[i]=='[')cout<<"P";
            else if(x[i]==']')cout<<"[";
            else if(x[i]=='\\')cout<<"]";
            else if(x[i]=='S')cout<<"A";
            else if(x[i]=='D')cout<<"S";
            else if(x[i]=='F')cout<<"D";
            else if(x[i]=='G')cout<<"F";
            else if(x[i]=='H')cout<<"G";
            else if(x[i]=='J')cout<<"H";
            else if(x[i]=='K')cout<<"J";
            else if(x[i]=='L')cout<<"K";
            else if(x[i]==';')cout<<"L";
            else if(x[i]=='\'')cout<<";";
            else if(x[i]=='X')cout<<"Z";
            else if(x[i]=='C')cout<<"X";
            else if(x[i]=='V')cout<<"C";
            else if(x[i]=='B')cout<<"V";
            else if(x[i]=='N')cout<<"B";
            else if(x[i]=='M')cout<<"N";
            else if(x[i]==',')cout<<"M";
            else if(x[i]=='.')cout<<",";
            else if(x[i]=='/')cout<<".";

        }
    }
    cout<<"\n";
    }
    return 0;
}
