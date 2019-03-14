#include <cstdio>
#include <vector>
using namespace std;
int main(){
    int t,n,u,l,r,val,q;

    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&u);
        vector<int> num(n+1,0);
        for(int i=0;i<u;i++){
            scanf("%d %d %d",&l,&r,&val);
            num[l]+=val;
            num[r+1]-=val;
        }
        //int x=num[0];
        for(int i=1;i<n;i++){
            num[i]+=num[i-1];
        }
        scanf("%d",&q);
        for(int i=0;i<q;i++){
            scanf("%d",&val);
            printf("%d\n",num[val]);
        }

    }
    return 0;
}


