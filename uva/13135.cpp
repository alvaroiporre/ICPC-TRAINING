
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    vector<int> num(50000001,0);
    cin>>t;
    //memset(num,0,sizeof(num));
    for(int i=1;true;i++){
        long long x=((i+1)*(i+2))/2;
        if(x>50000001) break;
        else num[x]=i;
    }
    while(t--){
        cin>>n;
        if(num[n]!=0)cout<<num[n]<<endl;
        else cout<<"No solution\n";
    }

    return 0;
}
