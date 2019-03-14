#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
        if(abs(a.first)%2==abs(b.first)%2){
            if(a.first%2==0){
                return a.first<b.first;
            }else{
                return a.first>b.first;
            }
        }
        return abs(a.first)%2>abs(b.first)%2;
    }
    return a.second<b.second;
}
int main(){
    int n,m,x;
    while(cin>>n>>m&&(n+m)>0){
        vector<pair<int,int> >num;
        int a=n;
        while(a--){
            cin>>x;
            int mod=x%m;
            //if(x<0)mod*=-1;

            num.push_back(make_pair(x,mod));
        }
        cout<<n<<" "<<m<<"\n";
        sort(num.begin(),num.end(),cmp);
        for(int i=0;i<n;i++){
            cout<<num[i].first<<"\n";
        }
        //cout<<"adf\n";
    }
    cout<<"0 0\n";
    return 0;
}
