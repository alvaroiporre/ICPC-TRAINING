#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,ai;
    cin>>t;
    while(t--){
        cin>>n;
        int r[n];
        int rep[11]={0};
        bool yes=true;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]>=8)yes=false;
        }
        if(yes){
            for(int i=0,j=n-1;i<=j;i++,j--){
                if(i==0){
                    if(r[i]!=1||r[j]!=r[i]){
                        yes=false;
                        break;
                    }
                }else{
                    if(r[i]!=r[j]){
                        yes=false;
                        break;
                    }
                }
                rep[r[i]]++;
            }
        }
        if(!rep[1]||!rep[2]||!rep[3]||!rep[4]||!rep[5]||!rep[6]||!rep[7])yes=false;
        if(yes)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
