#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        vector<string> first(a);
        for(int i=0;i<a;i++){
            cin>>first[i];
        }
        cin>>c>>d;
        vector <string>second(c);
        for(int i=0;i<c;i++){
            cin>>second[i];
        }
        bool yes=false;
        for(int i=0;i<=a-c;i++){
            for(int j=0;j<=b-d;j++){
                if(first[i][j]==second[0][0]){
                   yes=true;
                   for(int k=i,u=0;k<i+c;k++,u++){
                        for(int l=j,v=0;l<j+d;l++,v++){
                            //cout<<"funciona";
                            if(first[k][l]!=second[u][v]){
                                yes=false;
                                break;
                            }
                        }
                        if(!yes)break;
                   }
                }
                if(yes){
                    cout<<"YES\n";
                    break;
                }
            }
            if(yes)break;
        }
        if(!yes)cout<<"NO\n";
    }
    return 0;
}
