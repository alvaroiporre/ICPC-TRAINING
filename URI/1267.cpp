#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,a;
    while(cin>>n>>d&&n&&d){
        vector<bool>est(n,1);
        for(int i=0;i<d;i++){
            for(int j=0;j<n;j++){
                cin>>a;
                if(a==0)est[j]=0;
            }
        }
        bool yes=false;
        for(int j=0;j<n;j++){
            if(est[j]){
                cout<<"yes\n";
                yes=true;
                break;
            }
        }
       if(!yes)cout<<"no\n";
    }

    return 0;
}
