#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n],s[n],p=0,im=0;
    for(int i=0; i<n; ++i){
        cin>>v[i];
        if(i&1){
            im+=v[i];
            s[i]=im;
        }else {
            p+=v[i];
            s[i]=p;
        }
    }
    int t=p+im,c=0;
    for(int i=0;i<n;++i){
        if((t-v[i])%2==0){
            //cout<<"entra\n";
            if(i&1){
                int x=s[i]-v[i]+p-s[i-1];
                if(2*x==t-v[i])c++;
            }else{
                int x=s[i]-v[i]+im;
                if(i>0)x-=s[i-1];
                if(2*x==t-v[i])c++;
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}

//5 5 9 10 14 15 20
