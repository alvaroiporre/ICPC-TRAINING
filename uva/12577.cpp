#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int c=1;
    while(cin>>a&&a!="*"){
        cout<<"Case "<<c<<": ";
        if(a=="Hajj")cout<<"Hajj-e-Akbar\n";
        else cout<<"Hajj-e-Asghar\n";
        c++;
    }
    return 0;
}
