#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long c,p;
    while(cin>>c>>p&&c!=0&&p!=0){
        unsigned long long v=0,g=0;
        v=(unsigned long long)((p-2*c)/2);
        g=c-v;
        if((v*4+g*2)==p&&(v+g)==c) cout<<g<<" "<<v<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
