#include <iostream>

using namespace std;

struct team{
    string name;
    double assa;
    double dead;
    double kda;

} ;
int main(){
    short int k, i;
    team a[5],b[5];
    cin>>k;
    while(k--){

    long long pa=0, pb=0;
    double am=1000000000,bm=1000000000;
    for(i=0;i<5;i++){
        cin>>a[i].name>>a[i].assa>>a[i].dead;
        pa+=a[i].assa;
        if(a[i].dead==0) a[i].kda=1;
        else a[i].kda=(a[i].assa/a[i].dead);
        if(a[i].kda<am) am=a[i].kda;

    }
    for(i=0;i<5;i++){
        cin>>b[i].name>>b[i].assa>>b[i].dead;
        pb+=b[i].assa;
        if(b[i].dead==0) b[i].kda=1;
        else b[i].kda=(b[i].assa/b[i].dead);
        if(b[i].kda<bm) bm=b[i].kda;

    }

    if(pa>pb){
        for(i=0;i<5;i++){
            if(a[i].kda<(0.33333333))
                cout<<a[i].name<<" plz uninstall\n";
        }
        for(i=0;i<5;i++){
            if(b[i].kda==bm||b[i].kda<0.5)
                cout<<b[i].name<<" plz uninstall\n";
        }
    }else{
        for(i=0;i<5;i++){
            if(a[i].kda==am||a[i].kda<0.5)
                cout<<a[i].name<<" plz uninstall\n";
        }
        for(i=0;i<5;i++){
            if(b[i].kda<0.33333333)
                cout<<b[i].name<<" plz uninstall\n";
        }
    }
    }
    return 0;
}
