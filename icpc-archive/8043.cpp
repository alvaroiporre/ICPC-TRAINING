#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;

    while(cin>>n>>t){
    double mi=-1e10,ma=1e10;
    double dis[n+1],vel[n+1];
    for(int i=0;i<n;i++){
        cin>>dis[i]>>vel[i];
        mi=max(mi,-vel[i]);
    }
    double mid;
    while(ma-mi > 1e-9){
        double mid=(ma+mi)*0.5;
        double tim=0.0;
        for(int i=0;i<n;i++){
            tim+=(dis[i]/(vel[i]+mid));
        }
        if(tim>t)mi=mid;
        else ma=mid;
    }
    printf("%1.9f\n",(ma+mi)*0.5);
    }return 0;
}


