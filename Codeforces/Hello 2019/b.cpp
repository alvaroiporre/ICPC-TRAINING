#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    bool f=false;
    for(int i=0;i<(1<<(n+1));i++){
        int aux=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j))aux+=a[j];
        }
        if(aux==(sum/2)&&(sum&1)==0)f=true;
    }
    if(sum%360==0)f=true;
    cout<<(f?"YES\n":"NO\n");
    return 0;
}
