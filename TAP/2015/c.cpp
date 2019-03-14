#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,j,d;
    while(cin>>n>>s>>j>>d){
        string cad;
        cin>>cad;
        int a,b,a1,b1;
        a=b=a1=b1=0;
        for(int i=0;i<cad.length();i++){
            if(cad[i]=='A')a1++;
            else b1++;
            //cout<<a1<<" "<<b1<<"\n";
            if(a1>=j&&(a1-b1)>=d){
                a++;
                a1=b1=0;
            }
            if(b1>=j&&(b1-a1)>=d){
                b++;
                a1=b1=0;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
