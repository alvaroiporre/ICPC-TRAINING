#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string x,u="URI",o="OBI";

    cin>>n;
    while(n--){
        cin>>x;
        if(x.size()==3){
            string y=x;
            y[2]='I';
            if(u==y)cout<<"URI";
            else if(o==y)cout<<"OBI";
            else cout<<x;
        }else if(x.size()==2){
            if(x=="OB")cout<<"OBI";
            else if(x=="UR")cout<<"URI";
            else cout<<x;
        }else{
            cout<<x;
        }
        if(n>0)cout<<" ";
    }
    cout<<"\n";

    return 0;
}
