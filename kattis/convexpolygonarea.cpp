#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        vector<pair<double,double>>punto(n);
        for(int i=0;i<n;i++){
            cin>>x>>y;
            punto[i]=make_pair(x,y);
        }
        double a=punto[n-1].first*punto[0].second-punto[0].first*punto[n-1].second;
        for(int i=1;i<n;i++){
            a+=(punto[i-1].first*punto[i].second-punto[i].first*punto[i-1].second);
        }
        a*=0.5;
        cout<<abs(a)<<endl;
    }


    return 0;
}
