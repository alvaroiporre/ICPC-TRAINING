#include<bits/stdc++.h>
using namespace std;
int main(){
    bool x=true;
    string cad1,cad2;
    while(getline(cin,cad1)){
        getline(cin,cad2);
        x=true;
        for(int i=0;i<cad1.size();++i){
            if(cad1[i]==cad2[i]&&cad1[i]!=' ')x=false;
        }
        cout<<(x?"Y\n":"N\n");
    }

    return 0;
}
