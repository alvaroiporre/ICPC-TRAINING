#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int esp=0;
    while(cin>>n&&n){
        if(esp>0)cout<<"\n";
        bool flag=true;
        for(int i=1234;i<=98765/n;i++){
            int j=i*n;
            int tmp1,k=(i<10000);
            tmp1=i;
            while(tmp1){k|=(1<<(tmp1%10));tmp1/=10;}
            tmp1=j;
            while(tmp1){k|=(1<<(tmp1%10));tmp1/=10;}
            if(k==(1<<10)-1){
                flag=false;
                cout<<j<<" / ";
                cout<<(i<10000?"0":"");
                cout<<i<<" = "<<n<<"\n";
            }
        }
        if(flag)cout<<"There are no solutions for "<<n<<".\n";
        esp++;
    }
    return 0;
}
