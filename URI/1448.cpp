
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int j=1;j<=n;j++){
        string a,b,x;
        getline(cin,x);
        getline(cin,a);
        getline(cin,b);
        int ca=0,cb=0;
        for(int i=0;i<x.size();i++){
            if(a[i]==x[i])ca++;
            if(b[i]==x[i])cb++;
        }
        cout<<"Instancia "<<j<<"\n";
        if(ca==cb)cout<<"empate\n";
        else if(ca>cb)cout<<"time 1\n";
        else cout<<"time 2\n";
        cout<<"\n";
    }
    return 0;
}
