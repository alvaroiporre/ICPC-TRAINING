
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        int c=1;
        if(a>b){
            int aux=a;
            a=b;
            b=aux;
        }
        for(int j=a;j<=b;j++){
            int x=1, i=j;
            while(i!=1){
                if(i%2==0){
                    i/=2;
                }else{
                    i=(3*i+1);
                }
                x++;
            }
            if(x>c)c=x;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
