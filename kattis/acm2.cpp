#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,f;
    cin>>n>>x;
    vector<int>time;
    int tt=0,ac=0,p=0;
    for(int i=0;i<n;i++){
        cin>>f;
        if(i!=x){
            time.push_back(f);
        }else{
            tt+=f;
            p+=f;
            ac++;
        }
    }
    if(tt<=300){
        sort(time.begin(),time.end());
        for(int i=0;i<time.size();i++){
            if(tt+time[i]<=300){
                ac++;
                tt+=time[i];
                p+=tt;
            }else{
                break;
            }
        }
        cout<<ac<<" "<<p<<"\n";
    }else{
        cout<<"0 0\n";
    }


    return 0;
}
