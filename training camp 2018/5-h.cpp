#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string cad;
        cin>>cad;
        if(cad.length()>10){
            cout<<cad[0]<<cad.length()-2<<cad[cad.length()-1]<<endl;
        }else{
            cout<<cad<<endl;
        }
    }


    return 0;
}
