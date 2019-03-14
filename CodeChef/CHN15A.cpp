#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,c,ni;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ni=0;
        while(n--){
            cin>>c;
            c+=k;
            if(c%7==0)ni++;
        }
        cout<<ni<<"\n";
    }



    return 0;
}
