#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    while(cin>>m&&m){
        cin>>n;
        double f[m],r[n];
        for(int i=0;i<m;i++)cin>>f[i];
        for(int i=0;i<n;i++)cin>>r[i];
        double maxi=-1.0;
        vector<double>d;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                d.push_back(r[j]/f[i]);
            }
        }
        sort(d.begin(),d.end());
        for(int i=1;i<d.size();i++){
            maxi=max(maxi,d[i]/d[i-1]);
            //cout<<d[i]/d[i-1]<<endl;
        }
        cout<<fixed<<setprecision(2)<<maxi<<endl;
    }
    return 0;
}
