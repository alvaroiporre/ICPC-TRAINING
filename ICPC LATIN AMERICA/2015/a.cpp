#include<bits/stdc++.h>
//no solved
using namespace std;
int main(){
    string u;
    string dig="0123456789";
    while(cin>>u){
        int d[10]={0};
        int i=0;
        for(i=0;i<u.length();i++){
            if(d[(int)(u[i]-'0')]<2)d[(int)(u[i]-'0')]++;
            else break;
        }
        if(i==u.length())cout<<u<<endl;
        else{
            d[(int)(u[i]-'0')]++;
            cout<<u.substr(0,i)<<"-----\n";
            string u1="";
            while(true){
                int j;
                bool x=false;
                for(j=(int)(u[i]-'0')-1;j>=0;j++){
                    if(d[j]<2){
                        x=true;
                        d[j]++;
                        break;
                    }
                }
                if(x){
                    //cout<<i<<" "<<j<<endl;
                    u1=u.substr(0,i)+dig.substr(j,1);
                    //else u1="";
                    break;
                }else{
                    cout<<"reduce a "<<u[i]<<endl;
                    d[(int)(u[i]-'0')]--;
                    i--;
                }
            }
            //cout<<u1<<"---------\n";
            int t=9;
            int tam=u.size();
            if(u1[0]=='0'){
                u1="";
                for(int i=0;i<10;i++)d[i]=0;
                tam--;
            }
            while(u1.size()<tam){
                if(d[t]<2){
                    d[t]++;
                    u1=u1+dig.substr(t,1);
                }else{
                    t--;
                }
            }
            cout<<u1<<endl;
        }
    }
    return 0;
}
