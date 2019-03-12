#include<bits/stdc++.h>
using namespace std;
#define lson step << 1
#define rson step << 1 | 1
#pragma comment(linker,"/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
const int N = (1 << 17) + 100;
struct Node {
    int left , right;
    int val , dep;
}L[N << 2];
int n , q;
void push_up (int step) {
    L[step].dep = L[lson].dep + 1;
    if (L[step].dep % 2 == 0)
        L[step].val = L[lson].val | L[rson].val;
    else L[step].val = L[lson].val ^ L[rson].val;
}
void bulid (int step , int l , int r) {
    L[step].left = l;
    L[step].right = r;
    if (l == r) {
        scanf("%d", &L[step].val);
        L[step].dep = 1;
        return ;
    }
    int m = (l + r) >> 1;
    bulid (lson , l , m);
    bulid (rson , m + 1 , r);
    push_up (step);
}
void update (int step , int pos , int val) {
    if (L[step].left == L[step].right) {
        L[step].val = val;
        return ;
    }
    int m = (L[step].left + L[step].right) >> 1;
    if (pos <= m) update (lson , pos , val);
    else update (rson , pos , val);
    push_up (step);
}
int main () {
    scanf("%d %d", &n,&q);
    bulid (1 , 1 , 1 << n);
    while (q --) {
        int a , b;
        scanf("%d %d",&a,&b);
        update (1 , a , b);
        printf("%d\n", L[1].val );
    }
    return 0;
}
