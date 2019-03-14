#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main() {
    optimizar_io
    long int a, b, c, d;
    bool ban;
    while(cin>>a>>b>>c>>d){
        ban=true;
        for(int i=a;i<=c;i=i+a){
            if(i%a==0&&i%b!=0&&c%i==0&&d%i!=0){
                cout<<i<<endl;
                ban=false;
                break;
            }
        }
        if(ban)
            cout<<"-1"<<endl;
    }
    return 0;
}
