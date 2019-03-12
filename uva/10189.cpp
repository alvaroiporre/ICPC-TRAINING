#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c=1;
    while(cin>>a>>b&&(a!=0&&b!=0)){

        char vec[a][b];
        int mina[a][b];
        for(int i=0;i<a;i++){
            string cad;
            cin>>cad;
            for(int j=0;j<b;j++){
                vec[i][j]=cad[j];
                if(vec[i][j]=='*') mina[i][j]=-1;
                else mina[i][j]=0;
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(vec[i][j]=='*'){
                        if(i>0&&j>0&&mina[i-1][j-1]>=0)mina[i-1][j-1]++;
                        if(i>0&&mina[i-1][j]&&mina[i-1][j]>=0)mina[i-1][j]++;
                        if(i>0&&(j+1)<b&&mina[i-1][j+1]>=0)mina[i-1][j+1]++;
                        if(j>0&&mina[i][j-1]>=0)mina[i][j-1]++;
                        if((j+1)<b&&mina[i][j+1]>=0)mina[i][j+1]++;
                        if((i+1)<a&&j>0&&mina[i+1][j-1]>=0)mina[i+1][j-1]++;
                        if((i+1)<a&&mina[i+1][j]>=0)mina[i+1][j]++;
                        if((i+1)<a&&(j+1)<b&&mina[i+1][j+1]>=0)mina[i+1][j+1]++;
                }

            }
        }
        printf("Field #%d:\n",c);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mina[i][j]!=-1)cout<<mina[i][j];
                else cout<<"*";
            }
            cout<<endl;
        }
        c++;
        cout<<endl;
    }
    return 0;
}
