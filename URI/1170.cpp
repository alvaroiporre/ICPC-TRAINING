#include<cstdio>
#include<cmath>
//using namespace std;
int main(){
    int t,n;
    float x;
    scanf("%d",&t);
    while(t--){
        scanf("%f",&x);
        n=log2(x);
        x=log2(x);
        if(x-n>0)printf("%d dias\n",n+1);
        else printf("%d dias\n",n);
    }
    return 0;
}
