#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi=0;
    string x,most;
    map<string,int>cads;
    cin>>n>>x;
    if(n==2)cout<<x<<endl;
    else{
        for(int i=1;i<n;i++){
            map<string,int>::iterator s=cads.find(x.substr(i-1,2));
            if(s==cads.end()){
                cads.insert({x.substr(i-1,2),1});

            }else{
                cads[x.substr(i-1,2)]++;
            }
            if(cads[x.substr(i-1,2)]>maxi){
                maxi=cads[x.substr(i-1,2)];
                most=x.substr(i-1,2);
            }
        }
        cout<<most<<endl;
    }
    return 0;
}
