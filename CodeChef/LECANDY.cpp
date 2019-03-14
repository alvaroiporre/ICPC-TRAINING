#include<iostream>
using namespace std;
int main(){
    long long t,n,c,a,s;
    cin>>t;
    while(t--){
        cin>>n>>c;
        s=0;
        while(n--){
            cin>>a;
            s+=a;
        }
        cout<<(s<=c?"Yes\n":"No\n");
    }

    return 0;
}
