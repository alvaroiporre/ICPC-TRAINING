
#include <bits/stdc++.h>

using namespace std;
int fact(int n){
    if(n<2) return 1;
    return n*fact(n-1);
}
int main(){
    int n,i;
    long long num;
    while(cin>>n&&n!=0){
        i=1;
        num=0;
        while(n>0){
            num+=((n%10)*fact(i));
            n/=10;
            i++;
        }
        cout<<num<<endl;
    }
    return 0;
}
