
#include<iostream>
using namespace std;
int main(){

        int a[5],b[5];
        bool x=true;
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        for(int i=0;i<5;i++){
            cin>>b[i];
            if(a[i]==b[i])x=false;
        }
        if(x)cout<<"Y\n";
        else cout<<"N\n";
    return 0;
}
