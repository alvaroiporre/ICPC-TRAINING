#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    while(getline(cin,x)){
        bool g=false,a=false;
        for(int i=0;i<x.size();i++){
            if(x[i]=='_'||x[i]=='*'){
                if(x[i]=='_'){
                    if(!g){
                        if(x.find('_',x[i+1])){
                            cout<<"<i>";
                            g=true;
                        }
                    }
                    else{
                        cout<<"</i>";
                        g=false;
                    }
                }else{
                    if(!a){
                        if(x.find('*',x[i+1])){
                            cout<<"<b>";
                            a=true;
                        }
                    }
                    else{ /*if(x.find('*',x[i]))*/
                        cout<<"</b>";
                        a=false;
                    }
                }
            }else{
                cout<<x[i];
            }

        }
        cout<<"\n";
    }
    return 0;
}
