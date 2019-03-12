
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,t;
    string c;

    cin>>c;
    n=t=c.length();
    for(i=2;i<=t;i++){
        for(j=0;j<=t-i;j++){
            string x,y=c.substr(j,i);
            x=y;
            //cout<<x<<"----"<<endl;
            reverse(x.begin(),x.end());
            if(x==y) n++;
        }
    }
    cout<<n<<endl;
    return 0;
}
