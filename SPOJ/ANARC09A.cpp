#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int k=0;
    while(cin>>x&&x[0]!='-'){
        int o,c,ans;
        o = c = 0;
        int i = 0;
        for(int i=0;i<x.size();i++){
          if(x[i]=='{')
            o++;
          else{
            o--;
            if(o<0){
              o=1;
              c++;
            }
          }
        }
        ans = c+o/2;
        printf("%d. %d\n",k+1,ans);
        k++;
    }
    return 0;
}
