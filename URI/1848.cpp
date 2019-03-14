#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,l=0;
    string x;
    while(getline(cin,x)){
        if(x=="caw caw "||x=="caw caw"){
            n++;
            cout<<l<<"\n";
            if(n==3)break;
            l=0;
        }else{
            int p=4;
            for(int j=0;j<3;j++){
                if(x[j]=='*')l+=p;
                p/=2;
            }
        }
    }
    return 0;
}
