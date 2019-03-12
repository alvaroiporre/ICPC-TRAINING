#include<bits/stdc++.h>
using namespace std;
int main(){
    int c1[3],c2[3],c3[3];
    string l="BGC";
    while(cin>>c1[0]>>c1[1]>>c1[2]>>c2[0]>>c2[1]>>c2[2]>>c3[0]>>c3[1]>>c3[2]){
        int suma=c1[0]+c1[1]+c1[2]+c2[0]+c2[1]+c2[2]+c3[0]+c3[1]+c3[2];
        int mini=suma;
        string lmini="";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                for(int k=0;k<3;k++){
                    if(i!=j&&j!=k&&i!=k&&suma-c1[i]-c2[j]-c3[k]<=mini){
                        if(mini==suma-c1[i]-c2[j]-c3[k]){
                        lmini=(lmini<l.substr(i,1)+l.substr(j,1)+l.substr(k,1)?lmini:l.substr(i,1)+l.substr(j,1)+l.substr(k,1));
                        }else{
                            mini=suma-c1[i]-c2[j]-c3[k];
                            lmini=l.substr(i,1)+l.substr(j,1)+l.substr(k,1);
                        }
                    }
                }
    cout<<lmini<<" "<<mini<<endl;
    }

    return 0;
}
