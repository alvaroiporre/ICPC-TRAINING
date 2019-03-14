#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    while(cin>>x){
        cout<<((x.find('i')==string::npos)?"S\n":"N\n");
    }
    return 0;
}
