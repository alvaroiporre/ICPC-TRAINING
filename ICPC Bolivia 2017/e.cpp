#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string cad;
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,cad);
        for(int i=0;i<cad.length();i++){
            cout<<cad[i];
            if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u')
                cout<<"p"<<cad[i];

        }
        cout<<endl;
    }
    return 0;
}
