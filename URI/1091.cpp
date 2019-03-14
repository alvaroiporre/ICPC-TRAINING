
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n&&n!=0){
        int x,y,px,py;
        cin>>x>>y;
        while(n--){
            cin>>px>>py;
            if(px==x||py==y)cout<<"divisa\n";
            else if(px>x&&py>y)cout<<"NE\n";
            else if(px<x&&py>y)cout<<"NO\n";
            else if(px<x&&py<y)cout<<"SO\n";
            else cout<<"SE\n";
        }
    }
    return 0;
}

