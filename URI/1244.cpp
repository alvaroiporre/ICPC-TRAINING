#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.second==b.second)return true;
    return a.second>b.second;
}
int main(){
    int n,t;
    cin>>t;
    cin.ignore();
    while(t--){
        string cad;
        vector<pair<string,int> >pal;
        getline(cin,cad);
        int ini=0,fin=0;
        for(int i=0;i<cad.size();i++){
            if(cad[i]==' '){
                pal.push_back(make_pair(cad.substr(ini,i-ini),i-ini));
                ini=i+1;
            }
        }
        pal.push_back(make_pair(cad.substr(ini,cad.length()-ini),cad.length()-ini));
        sort(pal.begin(),pal.end(),cmp);
        for(int i=0;i<pal.size();i++){
            cout<<pal[i].first<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
