#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int cont=0;
        for(int i=0;i<n;i++){
            if(x[i]=='1')cont++;
        }
        cout<<(cont*(cont+1))/2<<"\n";
    }
    return 0;
}
