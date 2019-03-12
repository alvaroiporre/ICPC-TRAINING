#include<bits/stdc++.h>
using namespace std;
int main(){
    int t[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    string cad;
    int n;
    cin>>n;
    cin.ignore();
    for(int j=1;j<=n;j++){
        int c=0;

        getline(cin,cad);
        for(int i=0;i<cad.length();i++){
            if(cad[i]!=' '){
                c+=t[(int)(cad[i]-'a')];
            }else c++;
        }
        cout<<"Case #"<<j<<": "<<c<<endl;
    }
}
