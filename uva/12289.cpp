#include<bits/stdc++.h>
using namespace std;
bool one(string x){
    int c=0;
    if(x[0]!='o')c++;
    if(x[1]!='n')c++;
    if(x[2]!='e')c++;

    if(c>1)return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string pal;
        cin>>pal;
        if(pal.length()==5)cout<<3<<endl;
        else{
            if(one(pal))cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}
