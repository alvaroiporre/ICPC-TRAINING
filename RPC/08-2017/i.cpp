#include<bits/stdc++.h>

using namespace std;
bool primo(int n){
    if(n<=1)return false;
    if(n<=3)return true;
    //int cont=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            return n==1;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(primo(n))cout<<"yes\n";
    else cout<<"no\n";

    return 0;
}
