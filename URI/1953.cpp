#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string x;
    while(cin>>t){
        int intr=0,epr=0,ehd=0;
        while(t--){
            cin>>n>>x;
            if(x=="EPR")epr++;
            else if(x=="EHD")ehd++;
            else intr++;
        }
        cout<<"EPR: "<<epr<<"\nEHD: "<<ehd<<"\nINTRUSOS: "<<intr<<"\n";
    }
    return 0;
}
