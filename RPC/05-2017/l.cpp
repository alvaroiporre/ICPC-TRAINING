#include <bits/stdc++.h>
using namespace std;
int main(){
    string cad;
    int a,b,c;
    getline(cin,cad);
    cin.ignore(0);
    a=(int)(cad[0]-'0');
    b=(int)(cad[4]-'0');
    c=(int)(cad[8]-'0');
    if(a+b==c)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
