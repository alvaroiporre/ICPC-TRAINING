#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>h(20000,0);
    int a,b,c;
    int maxi=-1;
    while(cin>>a>>b>>c){
        for(int i=a;i<c;i++){
            h[i]=max(b,h[i]);
        }
        maxi=max(maxi,c);
    }
    for(int i=1;i<=maxi;i++){
        if(h[i]!=h[i-1]){
        	cout<<i<<" "<<h[i];
        	if(i==maxi)cout<<"\n";
        	else cout<<" ";
        }
    }
    return 0;
}
