#include<bits/stdc++.h>
//not solved
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m==0)cout<<n<<" "<<n<<"\n";
    else if(n==1)cout<<"1 1\n";
    else{
        int mini=max(n-m*2,0);
        int maxi=n-m-1;
        int n1=n;
        while(true){
            if((n1*(n1-1)/2)<=m)break;
            n1--;
        }
        maxi=n-n1;
        int m1=(n1*(n1-1)/2);
        if(m>m1)maxi--;
        if(maxi<mini)swap(maxi,mini);
        cout<<mini<<" "<<maxi<<"\n";
    }
    return 0;
}
