#include<bits/stdc++.h>
using namespace std;
int main(){
    string cad;
    while(cin>>cad){\
        bool f=true;
        for(int i=-0;i<cad.length();i++){
            if(cad[i]=='i'){
                f=false;
                break;
            }
        }
        cout<<((f)?"S\n":"N\n");
    }
    return 0;
}
