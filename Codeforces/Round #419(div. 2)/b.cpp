
#include <bits/stdc++.h>
using namespace std;

int main(){

    int rec[200001]={};
    int vec[200001]={};
    int n,k,q,a,b,c,d;
    scanf("%d %d %d",&n,&k,&q);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        rec[a]++;
        rec[b+1]--;
    }
    for(int i=1;i<=200000;i++){
        rec[i]+=rec[i-1];
        //cout<<i<<" "<<rec[i]<<endl;
    }
    for(int i=1;i<=200000;i++){
        if(rec[i]>=k)vec[i]++;
        vec[i]+=vec[i-1];
        //cout<<i<<" "<<vec[i]<<endl;
    }

    for(int i=0;i<q;i++){
        scanf("%d %d",&c,&d);
        int cont=vec[d]-vec[c-1];
        printf("%d\n",cont);
    }

    return 0;
}
