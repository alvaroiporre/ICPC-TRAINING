
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    while(cin>>a>>b>>c>>d&&(a!=0||b!=0||c!=0||d!=0)){
        cout<<(1080+((a-b+40)%40+(c-b+40)%40+(c-d+40)%40)*9)<<endl;
    }
    return 0;
}
