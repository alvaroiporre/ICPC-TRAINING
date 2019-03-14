
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h,m;
    cin>>n;
    h=n/3600;
    n%=3600;
    m=n/60;
    n%=60;
    cout<<h<<":"<<m<<":"<<n<<endl;
    return 0;
}
