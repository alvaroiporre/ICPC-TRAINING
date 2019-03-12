#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    while(cin>>x&&x!=0){
        if(x<10)cout<<x<<"\n";
        else{
            y=x;
            while(y>9){
                x=y;
                y=0;
                while(x>0){
                    y+=(x%10);
                    x/=10;
                }
            }
            cout<<y<<"\n";
        }
    }

    return 0;
}
