#include<bits/stdc++.h>
//incompleto
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        if(n==13)cout<<"1\n";
        else{
            int i=-1;
            for(i=2;i<n;i++){
                vector<bool>l(n,false);
                int m=0,j=0,k=0;
                while(1){
                    if(!l[j]){
                        k++;
                    }
                    if(k==i){
                        l[j]=true;
                        m++;
                        if(j==12)break;
                    }
                    j++;
                    if(j==n)j=0;
                }
                if(m==n)break;
            }
            cout<<i<<"\n";
        }
    }


    return 0;
}
