#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,y;
    while(cin>>n>>m){
        int puntos=0;
        vector<int>enc;
        while(n--){
            cin>>x>>y;
            if(x>y){
                puntos+=3;
            }else{
                enc.push_back(y-x);
            }
        }
        sort(enc.begin(),enc.end());
        for(int i=0;i<enc.size();i++){
            if(enc[i]==0&&m>0){
                m--;
                puntos+=3;
            }else if(m>enc[i]){
                m-=(enc[i]+1);
                puntos+=3;
            }else if(m==enc[i]){
                m-=enc[i];
                puntos++;
            }
        }
        cout<<puntos<<"\n";
    }
    return 0;
}
