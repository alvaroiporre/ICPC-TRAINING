#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        long long a;

        set<long long>shav;
        cin>>n;
        while(n--){
            cin>>a;
            shav.insert(a);
        }
        cout<<shav.size()<<endl;
    }

    return 0;
}

