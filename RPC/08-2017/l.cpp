#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<unsigned long long>palos;
    unsigned long long x;
    while(n--){
        cin>>x;
        palos.push_back(x);
    }
    sort(palos.begin(),palos.end());
    for(int i=2;i<palos.size();i++){
        if(palos[i-2]+palos[i-1]>palos[i]){
            cout<<"possible\n";
            return 0;
        }
    }
    cout<<"impossible\n";
    return 0;
}
