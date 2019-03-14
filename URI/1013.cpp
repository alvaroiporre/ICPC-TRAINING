#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    a=max(max(a,b),c);
    cout<<a<<" eh o maior\n";
    return 0;
}
