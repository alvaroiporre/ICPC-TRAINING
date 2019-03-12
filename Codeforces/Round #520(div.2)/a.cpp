#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    bool num[1009]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        num[x]=1;
    }
    bool y=false;
    int m=0;
    int may=0;
    for(int i=1;i<1001;i++){
        if(num[i]&&y)m++;
        else if(num[i]){
            if(i!=1)m=0;
            else m=1;
            y=true;
        }else {
            may=max(--m,may);
            y=false;
        }
    }
    may=max(may,m);
    cout<<may<<endl;
    return 0;
}
