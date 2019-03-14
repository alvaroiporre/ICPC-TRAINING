#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    cin.ignore(0);
    if(x.size()<=140) cout<<"TWEET\n";
    else cout<<"MUTE\n";
    return 0;
}
