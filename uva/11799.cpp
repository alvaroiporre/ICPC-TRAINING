#include<iostream>
using namespace std;
int main(){
    int n,x,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        int men=-1;
        while(x--){
            cin>>a;
            men=max(men,a);
        }
        cout<<"Case "<<i<<": "<<men<<"\n";
    }

    return 0;
}
