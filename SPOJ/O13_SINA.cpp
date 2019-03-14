
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int x=0,y=0;
        for(int i=1;i*2<=n;i++){
            if(n%i==0)x+=i;
        }
        for(int i=1;i*2<=x;i++){
            if(x%i==0)y+=i;
        }
        if(y==n)cout<<x<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
