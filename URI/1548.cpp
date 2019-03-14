#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>nota,nota1;
        while(n--){
            int a;
            cin>>a;
            nota.push_back(a);
            nota1.push_back(a);
        }
        sort(nota.rbegin(),nota.rend());
        int c=0;
        for(int i=0;i<nota.size();i++){
            if(nota[i]==nota1[i])c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
