#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<string>l;
        while(n--){
            string li;
            cin>>li;
            l.push_back(li);
        }
        sort(l.begin(),l.end());
        for(int i=0;i<l.size();i++){
            cout<<l[i]<<"\n";
        }
    }

    return 0;
}
