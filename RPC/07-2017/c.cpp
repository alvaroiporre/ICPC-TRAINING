#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c,d;
    cin>>a>>b;
    c=b+a;
    d=a;
    for(int i=0;i<b.length();i++){
        if(a[i]>=b[i])d[i]=(a[i]-b[i]+'A');
        else d[i]=(char)(a[i]-b[i]+'A'+26);
        //cout<<a[i]<<" "<<b[i]<<"="<<d[i]<<endl;
        //else d[i]=(c[i]-a[i]+'A');
    }
   // cout<<":\n";
    for(int i=b.length();i<d.length();i++){
        if(a[i]>=d[i-b.length()])d[i]=(a[i]-d[i-b.length()]+'A');
        else d[i]=(char)(a[i]-d[i-b.length()]+'A'+26);
        //cout<<a[i]<<" "<<d[i-b.length()]<<"="<<d[i]<<endl;
        //else d[i]=(c[i]-a[i]+'A');
    }

    cout<<d<<endl;

    return 0;
}
