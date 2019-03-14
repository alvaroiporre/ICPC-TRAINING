#include <bits/stdc++.h>
using namespace std;
int main(){
    long long pri=0,se=1,n;
    cin>>n;

    for(int i=0;i<n;i++){
       if(i<n-1)cout<<pri<<" ";
       else cout<<pri;
       se+=pri;
       pri=se-pri;
    }
    //cout<<endl;
    return 0;
}



