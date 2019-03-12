/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,a,b,k,ta,tb,fa,fb;
    cin>>n>>h>>a>>b>>k;
    while(k--){
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb){
            cout<<abs(fa-fb)<<endl;
        }else{
            int c1,c2,c3,c4;

            if(fa>=a&&fa<=b){
                c1=0;
                c3=fa;
            }else{
                if(fa>b){
                    c1=fa-b;
                    c3=b;
                }else{
                    c1=a-fa;
                    c3=a;
                }
            }
            if(fb>=a&&fb<=b){
                c2=0;
                c4=fb;
            }else{
                if(fb>b){
                    c2=fb-b;
                    c4=b;
                }else{
                    c2=a-fb;
                    c4=a;
                }
            }


            if(ta>tb){
                cout<<ta-tb+c1+c2+abs(c3-c4)<<endl;
            }else{
                cout<<tb-ta+c1+c2+abs(c3-c4)<<endl;
            }
        }
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
        vector<int>e2(n+1,0);
        e2[i]=1;
        for(int j=0;j<n;j++){
            e2[p[j]]++;
            if(e2[p[j]]>=2){
                cout<<p[j]<<" ";
                break;
            }
        }
    }
    return 0;
}
