#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define MAX 1000009
int main(){

    vector<ll> div(MAX);

    vector<bool> prime(MAX,false);
    div[1]=1;
    div[2]=2;
    prime[2]=1;
    for(int i=4;i<MAX;i+=2){
        prime[i-1]=true;
        div[i]=2;
    }

    for(int i=3;i*i<MAX;i+=2){
        if(prime[i]){
            div[i]=i;
            for(int j=i+i;j*j<MAX;j+=i){
                prime[j]=false;
                div[j]=i;
            }
        }
    }
    ll x;
    cin>>x;
    map<ll,ll>d;
    while(x!=1){
        d[div[x]]++;
        x/=div[x];
    }
    ll numero=1;
    for(map<ll,ll>::iterator j=d.begin();j!=d.end();j++){
        numero*=j->first;
      // cout<<j->second<<" ";
    }
    //cout<<"\n";
    long long veces=0;
    while(true){
        bool flag=true,dv=false,s=false;
        for(map<ll,ll>::iterator j=d.begin();j!=d.end();j++){
            if(j->second>1&&j->second&1){
                flag=false;
                s=true;
                d[j->first]++;
            }
            else if(j->second>1)s=true;
        }

        if(s)veces++;
        for(map<ll,ll>::iterator j=d.begin();j!=d.end();j++){
            if(j->second>1){
                flag=false;
                dv=true;
                d[j->first]=((j->second)/2);
            }
        }
        if(flag)break;
        if(dv)veces++;

    }
    cout<<numero<<" "<<veces<<endl;

    return 0;
}
