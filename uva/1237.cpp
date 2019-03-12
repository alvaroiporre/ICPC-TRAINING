#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,d,l,h,q,p;

    cin>>t;
    while(t--){
        vector<pair<int,int> >lim;
        vector<string>car;
        cin>>d;
        while(d--){
            string c;
            cin>>c>>l>>h;
            car.push_back(c);
            lim.push_back({l,h});
        }
        cin>>q;
        while(q--){
            cin>>p;
            int flag=0;
            string cr;
            for(int i=0;i<lim.size();i++){
                if(lim[i].first<=p&&lim[i].second>=p){
                    cr=car[i];
                    flag++;
                }
            }
            if(flag==1)cout<<cr<<"\n";
            else cout<<"UNDETERMINED\n";
        }
        if(t>0)cout<<"\n";
    }
    return 0;
}
