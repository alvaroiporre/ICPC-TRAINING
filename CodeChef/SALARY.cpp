#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int w[n],s=0,minimo=10001;

        for(int i=0;i<n;i++){
            cin>>w[i];
            s+=w[i];
            minimo=min(minimo,w[i]);
        }
        cout<<s-minimo*n<<"\n";
    }

    return 0;
}
