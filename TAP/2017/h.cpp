#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int>a;
    a.push_back(0);
    cin>>n;
    int cont=0;
    for(int i=0;i<n;i++){
        cin>>x;
        int t=a.size();
        if(x!=a[t-1]){
            a.push_back(x);
            t++;
            if(t>2&&a[t-3]<a[t-2]&&a[t-2]>a[t-1]){
                cont++;
            }
        }

    }
    a.push_back(0);
    int t=a.size();
    if(a[t-3]<a[t-2]&&a[t-2]>a[t-1]){
        cont++;
    }
    cout<<cont<<endl;



    return 0;
}
