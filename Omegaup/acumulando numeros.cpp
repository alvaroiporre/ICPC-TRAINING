#include <cstdio>

int main(){
    int n,i;

    scanf("%d",&n);
    int ac[n];
    for(i=0;i<n;i++){
        scanf("%d",&ac[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n",ac[i]);
    }

    return 0;
}

