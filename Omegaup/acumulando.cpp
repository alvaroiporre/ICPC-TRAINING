#include <cstdio>

int main(){
    int n,a,p=0,i=0,t=0,c;

    scanf("%d",&n);
    c=n;
    while(c--){
        scanf("%d",&a);
        if(a%2==0) p+=a;
        else i+=a;
        t+=a;
    }
    float pro=t/n;
    printf("%d %d %.1f\n",p,i,pro);
    return 0;
}
