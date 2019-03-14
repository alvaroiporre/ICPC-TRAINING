#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int N,X[1000],Y[1000],cont,ans,l,r;
    long long a[1000];

    while(1){
        scanf("%d",&N);
        if(N==0) break;

        for(int i=0;i<N;i++) scanf("%d %d",&X[i],&Y[i]);

        ans=0;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) a[j]=(long long)(X[i]-X[j])*(X[i]-X[j])+(long long)(Y[i]-Y[j])*(Y[i]-Y[j]);

            sort(a,a+N);

            l=0;

            while(l<N){
                r=l;
                while(r<N && a[r]==a[l]) r++;
                cont=r-l;
                ans+=(cont*(cont-1))>>1;
                l=r;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
