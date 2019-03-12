#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        if(x!="0"&&x!="1"){
            int n=(int)(x[x.length()-1]-'0');
            if(n==0||n==5) cout<<76<<endl;
            else if(n==1)cout<<16<<endl;
            else if(n==2||n==7) cout<<56<<endl;
            else if(n==3||n==8) cout<<96<<endl;
            else if(n==4||n==9) cout<<36<<endl;
            else cout<<16<<endl;
        }else{
            if(x=="0")cout<<1<<endl;
            else cout<<66<<endl;
        }
    }
    return 0;
}
