#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string x;
    cin>>n>>x;
    int j=1;
    for(int i=0;i<n;){
        cout<<x[i];
        i+=j;
        j++;
    }
    cout<<"\n";
    return 0;
}
