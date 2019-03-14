#include <bits/stdc++.h>
using namespace std;
int main(){
 int n,x;
 cin>>n;
     vector<int> num(n+1,0);
     for(int i=1;i<n;i++){
        cin>>x;
        num[x]=1;
     }
     int i;
     for(i=1;i<n;i++){
        if(num[i]==0){
            //cout<<i<<endl;
            break;
        }
     }
     cout<<i<<endl;

 return 0;
}
