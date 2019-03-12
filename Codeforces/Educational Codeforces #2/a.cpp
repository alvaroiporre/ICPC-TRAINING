#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>l,n;
    bool num=true;
    string u="";
    for(int i=0;i<s.size();++i){
        if(s[i]==','||s[i]==';'){
            if(u.size()>0&&num){
                if((u.size()>1&&u[0]!='0')||(u.size()==1)){
                        n.push_back(u);
                }else{
                    l.push_back(u);
                }
            }else{
                l.push_back(u);
            }
            u="";
            num=true;
        }else{
            if(s[i]>'9'||s[i]<'0'){
                num=false;
            }
            u+=s.substr(i,1);
        }
    }
    if(u.size()>0&&num){
        if((u.size()>1&&u[0]!='0')||(u.size()==1)){
            n.push_back(u);
        }else{
            l.push_back(u);
        }
    }else{
        l.push_back(u);
    }
    if(n.size()>0){
        cout<<"\"";
        for(int i=0;i<n.size();++i){
            cout<<n[i];
            if(i<n.size()-1)cout<<",";
        }
        cout<<"\"\n";
    }else cout<<"-\n";
    if(l.size()>0){
        cout<<"\"";
        for(int i=0;i<l.size();++i){
            cout<<l[i];
            if(i<l.size()-1)cout<<",";
        }
        cout<<"\"\n";
    }else cout<<"-\n";
    return 0;
}
