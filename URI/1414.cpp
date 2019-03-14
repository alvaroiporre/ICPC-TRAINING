#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string x;
    while(cin>>t>>n&&t){
        int p=0;
        int pt;
        for(int i=0;i<t;i++){
            cin>>x>>pt;
            p+=pt;
        }
        int em=n-(p-2*n);
        cout<<em<<"\n";
    }

    return 0;
}
