#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int s1=0,s2=0;
    vector<int>l1(3);
    vector<int>l2(3);
    for(int i=0;i<3;i++){
        l1[i]=s[i]-'0';
        s1+=l1[i];
    }
    for(int i=0;i<3;i++){
        l2[i]=s[i+3]-'0';
        s2+=l2[i];
    }
    if(s1!=s2){
        int d, cont=0;
        if(s1>s2){
            sort(l1.rbegin(),l1.rend());
            sort(l2.begin(),l2.end());
            d=s1-s2;
            for(int i=0;i<3;i++){
                if((l2[i]<9||l1[i]>0)&&d>0){
                    d-=max(9-l2[i],l1[i]);
                    cont++;
                }
            }
        }else{
            sort(l1.begin(),l1.end());
            sort(l2.rbegin(),l2.rend());
            d=s2-s1;
            for(int i=0;i<3;i++){
                if((l1[i]<9||l2[i]>0)&&d>0){
                    d-=max(9-l1[i],l2[i]);
                    cont++;
                }
            }
        }
        cout<<cont<<"\n";
    }else{
        cout<<"0\n";
    }

    return 0;
}
