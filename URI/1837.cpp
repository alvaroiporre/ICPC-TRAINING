#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,q,r;
    cin>>a>>b;

    if(a<0){
        int f,e;
        if(b<0)e=b*-1;
        for(r=0;r<b;r++){
            f=a-r;
            if(f%b==0)break;
        }
        q=f/b;
    }else{
        r=a%b;
        q=a/b;
    }
    cout<<q<<" "<<r<<endl;
    return 0;
}
