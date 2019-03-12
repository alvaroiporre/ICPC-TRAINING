#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    ll may=0LL;
    ll pri=-1,se=-1;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>se){
            se=a[i];
            if(se>pri){
                ll aux=pri;
                pri=se;
                se=aux;
            }
        }
        may+=a[i];
    }
    vector<int>ind;
    for(int i=0;i<n;i++){
        ll aux=a[i];
        if(aux==pri){
            may-=pri;
            if(may-se==se)ind.push_back(i+1);
            may+=pri;
        }
        else if(aux==se){
            may-=se;
            if(may-pri==pri)ind.push_back(i+1);
            may+=se;
        }else{
            may-=aux;
            if(pri==may-pri)ind.push_back(i+1);
            may+=aux;
        }
    }
    cout<<ind.size()<<endl;
    if(ind.size()>0)for(int i=0;i<ind.size();i++){
        cout<<ind[i];
        if(i<ind.size()-1)cout<<" ";
        //else cout<<"\n";
    }
    cout<<"\n";
    return 0;
}
