#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string>a,pair<int, string> b){
    return a.first<b.first;
}
int main(){
    int n,a,b,i=0;
    scanf("%d\n",&n);

    while(i<n){
        cin>>a>>b;
        string x;
        vector<pair<int , string> >dna;
        for(int j=0;j<b;j++){
            int cont=0;
            cin>>x;
            for(int k=0;k<x.size()-1;k++){
                for(int l=k+1;l<x.size();l++){
                    if(x[k]>x[l])cont++;
                }
            }
            //cout<<">>>"<<cont<<endl;
            dna.push_back(make_pair(cont,x));
        }
        if(i>0)cout<<"\n";
        stable_sort(dna.begin(),dna.end(),cmp);
        for(int j=0;j<b;j++){
            cout<<dna[j].second<<endl;
        }

        i++;
    }
    return 0;
}
