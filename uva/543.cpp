
#include<bits/stdc++.h>
#define N 1000001
using namespace std;

int main(){
    bool table[N];
    for(int i = 3; i <= N; i+=2) table[i] = true;
    table[2] = true;
    for(int i = 3; i*i <= N; i+=2)
        if(table[i])
            for(int j = i*i; j <= N; j += i) table[j] = false;
    int n;
    while(cin>>n&&n!=0){
        bool x=false;
        for(int i=2;i<n;i++){
            if(table[i]&&table[n-i]){
                cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
                x=true;
                break;
            }
        }
        if(!x)cout<<"Goldbach's conjecture is wrong.\n";
    }


    return 0;
}
