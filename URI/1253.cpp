#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int d;
        string x;
        cin>>x>>d;
        for(int i=0;i<x.size();i++){
            cout<<(char)((x[i]-d-'A'+26)%26+'A');
        }
        cout<<"\n";
    }


    return 0;
}
