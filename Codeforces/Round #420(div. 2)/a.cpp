
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    bool val;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(c[i][j]>1){
                val=0;
                for(int k=0;k<n;k++){
                    for(int h=0;h<n;h++){
                        //cout<<c[i][h] <<" "<<c[k][j]<<">>>>>>\n";
                        if(c[i][h]+c[k][j]==c[i][j]&&(i!=k||j!=h)){
                            val=1;
                            //cout<<"yes\n";
                            break;
                        }
                    }
                    if(val)break;

                }
                if(!val){
                    cout<<"No\n";
                    return 0;
                }
            }
        }
    }
    if(val) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
