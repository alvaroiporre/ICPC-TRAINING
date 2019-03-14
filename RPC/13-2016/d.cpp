
#include <bits/stdc++.h>
#define ll long long
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007

using namespace std;
char a[3000005];
int pow(int x) {
    int s=1;
    for(int i=1;i<=x;i++)
        s=(s*2)%MOD;
    return s;
}

int main(){
    optimizar_io
    int n,m;
    while (cin>>n>>m)
    {
        cin>>a;
        int k=0;
        int ans=0;
        int flag=1;
        for(int i=0;i<=n-1;i++){
            if (((k*10+a[i]-'0')%m)==0) {ans++;}
            else{if (i==n-1){
                    cout<<"0"<<endl;
                    flag=0;
                    break;
                }
                }
            k=(k*10+a[i]-'0')%m;
        }
        if (flag) cout<<pow(ans-1)<<endl;
    }
    return 0;
}


