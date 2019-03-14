#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int cont=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i]){
                cont+=((int)(b[i]-a[i]));
            }else if(a[i]>b[i]){
                cont+=((int)('z'-a[i]+b[i]-'a'+1));
            }
        }
        cout<<cont<<"\n";
    }
    return 0;
}
