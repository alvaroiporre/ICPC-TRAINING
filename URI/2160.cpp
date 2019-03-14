#include<iostream>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    if(x.size()<=80)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
