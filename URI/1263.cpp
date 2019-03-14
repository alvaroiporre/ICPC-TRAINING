#include<bits/stdc++.h>
using namespace std;
int main(){
    string pal;
    while(getline(cin,pal)){
        char x=pal[0];
        int cont=0,c=1;
        for(int i=1;i<pal.size();i++){
            if(pal[i-1]==' '){
                if(pal[i]==x||pal[i]==(char)(x+32)||pal[i]==(char)(x-32)){
                    c++;
                }else{
                    x=pal[i];
                    c=1;
                }
                if(c==2){
                    cont++;
                }
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
