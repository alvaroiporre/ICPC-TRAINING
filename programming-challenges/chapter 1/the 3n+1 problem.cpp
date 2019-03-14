#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    long long i,j,k,c,m,aux;
    while(cin>>i>>j&&(i>0)&&(j>0)){
        m=0;
        cout<<i<<" "<<j<<" ";
        if(i>j){
            i+=j;
            j=i-j;
            i=i-j;
        }

        for(k=i;k<=j;k++){
            c=1;
            aux=k;
            while(aux!=1){
                if(aux%2==0) aux/=2;
                else aux=(aux*3)+1;
                c++;
            }
            if(c>m) m=c;
        }
        cout<<m<<"\n";
    }
    return 0;
}
