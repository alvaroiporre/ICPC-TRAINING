#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]%2==1)num[i]++;
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0)num[i]--;
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
