#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int car[n];
        for(int i=0;i<n;i++){
            cin>>car[i];
        }
        if(next_permutation(car,car+n)){
            for(int i=0;i<n;i++){
                cout<<car[i];
            }
        }else cout<<"-1";
        cout<<"\n";
    }

    return 0;
}
