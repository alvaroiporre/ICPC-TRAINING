#include<bits/stdc++.h>
using namespace std;
struct par{
    int o,c,com;
};

int main(){
    int n;
    cin>>n;
    string x;
    vector<par>lis;
    for(int k=0;k<n;++k){
        cin>>x;
        int op=0,cl=0,cmp=0;
        for(int i=0;i<x.size();++i){
            if(x[i]=='(')op++;
            else{
                if(op>0){
                    op--;
                    cmp++;
                }else{
                    cl++;
                }
            }
        }
        par u;
        u.o=op,u.c=cl,u.com=cmp;
        //cout<<u.o<<" "<<u.c<<" "<<u.com<<"\n";
        lis.push_back(u);
    }
    int m=0;
    for(int i=0;i<n-1;++i){
        int maxi=0;
        for(int j=i+1;j<n;++j){
            par a=lis[i],b=lis[j];
            if(a.o==b.c&&a.c==b.o&&(a.c==0||a.o==0)){
                maxi=(max(a.o,a.c)+min(a.com,b.com));
            }
        }
        m=max(maxi,m);
    }
    cout<<m<<"\n";
    return 0;
}
