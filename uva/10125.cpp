#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n){
        int num[n];
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num,num+n);
        bool f=true;
        for(int x=n-1;x>=0&&f;x--){
            for(int i=0;i<n&&f;i++){
                if(i==x)continue;
                for(int j=i+1;j<n&&f;j++){
                    if(j==x)continue;
                    for(int k=j+1;k<n&&f;k++){
                        if(k==x)continue;
                        if(num[i]+num[j]+num[k]==num[x]){
                            cout<<num[x]<<"\n";
                            f=false;
                        }
                    }
                }
            }
        }
        if(f)cout<<"no solution\n";
    }
    return 0;
}
