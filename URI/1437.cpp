#include<bits/stdc++.h>
using namespace std;
int main(){
    char p[]={'N','L','S','O'};
    int n;
    string x;
    while(cin>>n&&n){
        cin>>x;
        int l=0;
        for(int i=0;i<n;i++){
            if(x[i]=='D')l++;
            else l--;
            if(l==-1)l=3;
            if(l==4)l=0;
        }
        cout<<p[l]<<"\n";
    }
    return 0;
}
