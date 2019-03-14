/*#include <cstdio>



int main(){
    short int a, n[10],i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        scanf("%d",&n[i]);
    for(i=0;i<a;i++){
        for(j=1;j<=10;j++){
            printf("%dx%d=%d\n",n[i],j,n[i]*j);
        }
        puts("");

    }


    return 0;

}
*/
#include <iostream>

using namespace std;

int main(){
    int a,b=1,c=1,f=1;
    cin>>a;
    while(f<a){
        cout<<f<<" ";
        f=b+c;
        b=c;
        c=f;

    }

    return 0;
}
