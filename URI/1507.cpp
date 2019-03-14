#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string x,s;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>n;
        while(n--){
            cin>>s;
            bool yes=false;
            if(x.size()>=s.size()){
            for(int i=0;i<=x.size()-s.size();i++){
                if(x[i]==s[0]){
                    if(x.substr(i,s.size())==s){
                        yes=true;
                        break;
                    }
                }
            }
            }
            if(yes)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
