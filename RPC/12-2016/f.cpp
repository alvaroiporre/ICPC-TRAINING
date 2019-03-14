#include<iostream>

using namespace std;

int main(){
    int n,i, dr=0;
    bool d=0, r=0;
    string a="", b;
    cin>>n;
    while(n--){
       cin>>b;
       a+=b;
    }
    for(i=0;i<a.length();i++){
        if(d&&!r&&a[i]=='R'){
            d=r=0;
            dr++;
            continue;

        }
        if(r&&!d&&a[i]=='D'){
            d=r=0;
            dr++;
            continue;
        }
        if(a[i]=='D'&&!r&&!d){
            d=1;

        }
        if(a[i]=='R'&&!d&&!r){
            r=1;

        }
    }

    cout<<dr<<endl;
    return 0;
}
