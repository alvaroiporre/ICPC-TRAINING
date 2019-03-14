#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,x,y,c,n,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>c>>n;
        bool yes=false;
        while(n--){
            cin>>a>>b;
            if(a+y>=x&&b<=c)yes=true;
        }
        cout<<(yes?"LuckyChef\n":"UnluckyChef\n");
    }

    return 0;
}
