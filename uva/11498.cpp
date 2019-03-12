
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,y,x1,y1;
    while(cin>>n&&n!=0){
        cin>>x>>y;
        while(n--){
            cin>>x1>>y1;
            if(x1==x||y1==y)cout<<"divisa\n";
            else if(x1>x&&y1>y)cout<<"NE\n";
            else if(x1<x&&y1>y)cout<<"NO\n";
            else if(x1>x&&y1<y)cout<<"SE\n";
            else cout<<"SO\n";
        }
    }

    return 0;
}
