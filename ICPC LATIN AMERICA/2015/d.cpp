#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,b,d,x;
    while(cin>>n>>m){
        int gan=0;
        while(m--){
            int c=0,c1=0;
            cin>>b;
            cin>>d;
            c1=d;
            for(int i=1;i<n;i++){
                cin>>x;
                c+=x;
                c1+=x;
            }
            int g,g2=0;
            if(c1<=b)g2=d;
            if(c1>b){
                while(c+d>b&&d>0){
                    d/=10;
                }
                g=d;
            }else{
                if(c1==b){
                    g=d;
                }else{
                    while(c+d<=b&&d<=10000){
                        d*=10;
                    }
                    g=(d/10);
                }
            }
            gan+=(g-g2);
        }
        cout<<gan<<endl;

    }

    return 0;
}
