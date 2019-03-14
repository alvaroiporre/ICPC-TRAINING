#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t&&t){
        while(t--){
            int n;
            cin>>n;
            if(n%2)
                cout<<n+n-1<<endl;
            else
                cout<<2*(n-2)+2<<endl;
        }
    }
    return 0;
}
