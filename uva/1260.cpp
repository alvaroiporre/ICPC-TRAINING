#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        while(t--){
            cin>>n;
            int num[n];
            int sumt=0;
            for(int i=0;i<n;i++)cin>>num[i];
            for(int i=1;i<n;i++){
                int sum=0;
                for(int j=0;j<i;j++){
                    //cout<<num[i]<<" "<<num[j];
                    if(num[i]>=num[j])sum++;
                }
                sumt+=sum;
            }
            cout<<sumt<<endl;
        }
    }
    return 0;
}
