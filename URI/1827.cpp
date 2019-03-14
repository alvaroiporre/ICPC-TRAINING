#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j&&i==n/2)cout<<4;
                else if(i>=n/3&&j>=n/3&&i<n-n/3&&j<n-n/3)cout<<1;
                else if(i==j)cout<<2;
                else if(i+j==n-1)cout<<3;
                else cout<<0;
            }
            cout<<"\n";
        }
    }
    return 0;
}
/*00 01 02 03 04 05
  10 11 12 13 14 15
  20 21 22 23 24 25
  30 31 32 33 34 35
  40 41 42 43 44 45
  50 51 52 53 54 55
*/
