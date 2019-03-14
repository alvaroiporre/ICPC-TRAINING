#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t&&t){
        while(t--){
            int a[5],cont=0,x;
            char l[]={'A','B','C','D','E'};
            for(int i=0;i<5;i++){
                cin>>a[i];
                if(a[i]<=127){
                    cont++;
                    x=i;
                }
            }
            if(cont==1)cout<<l[x]<<"\n";
            else cout<<"*\n";
        }
    }

    return 0;
}
