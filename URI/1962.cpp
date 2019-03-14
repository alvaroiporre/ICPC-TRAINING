#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        x=2015-x;
        if(x>0)cout<<x<<" D.C.\n";
        else cout<<abs(x)+1<<" A.C.\n";
    }
    return 0;
}
