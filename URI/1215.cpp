#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    set<string>cadenas;
    while(getline(cin,x)){
        //if(x=="1")break;
        y="";
        for(int i=0;i<x.size();i++){
            if((x[i]>='A'&&x[i]<='Z')||(x[i]>='a'&&x[i]<='z')){
                if(x[i]>='A'&&x[i]<='Z'){
                    x[i]=(char)(x[i]+32);
                }
                y+=x.substr(i,1);
            }else{
                if(y!=""){
                    cadenas.insert(y);
                    y="";
                }
            }
        }
        if(y!=""){
            cadenas.insert(y);
            y="";
        }
    }
    //sort(cadenas.begin(),cadenas.end());
    for(set<string>::iterator i=cadenas.begin();i!=cadenas.end();i++){
        cout<<*i<<"\n";
    }

    return 0;
}
