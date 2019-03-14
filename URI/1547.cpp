#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,num;
    cin>>n;
    while(n--){
        cin>>x>>y;
        int d=100,ind=-1;
        for(int i=1;i<=x;i++){
            cin>>num;
            int a=abs(num-y);
            if(a<d){
                d=a;
                ind=i;
            }
        }
        cout<<ind<<"\n";
    }

    return 0;
}
