#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    while(cin>>n>>m){
        vector<int>goles(n,1);
        int a, c=0;
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                cin>>a;
                if(!a)goles[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(goles[i])c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
