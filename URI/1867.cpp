#include<bits/stdc++.h>

using namespace std;

int dig(string &s){
    int n;
    while(s.size()>1){
        n=0;
        for(int i=0;i<s.size();i++){
            n+=(s[i]-'0');
        }
        s=to_string(n);
    }

    return atoi(s.c_str());
}
int main(){
    string a,b;
    int aa,bb;

    while(cin>>a>>b&&(a!="0"||b!="0")){
        //cout<<dig(a)<<" "<<dig(b)<<endl;
        aa=dig(a);bb=dig(b);
        if(aa==aa)cout<<0<<endl;
        else if(aa<bb)cout<<2<<endl;
        else cout<<1<<endl;
    }
    return  0;
}
