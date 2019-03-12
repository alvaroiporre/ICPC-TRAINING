
#include <iostream>

using namespace std;
int main(){
    int n, t;
    cin>>n;
    for(int i=0;i<n;i++){
        string cad;
        cin>>cad;
        t=cad.length();
        if(t>10){
            cout<<cad[0]<<t-2<<cad[t-1];
        }else{
            cout<<cad;
        }
        cout<<endl;
    }
    return 0;
}
