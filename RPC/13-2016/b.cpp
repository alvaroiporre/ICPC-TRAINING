#include <bits/stdc++.h>
#define LL long long
#define eps 1e-8
#define maxn 1010000
#define mod 100000007
#define inf 0x3f3f3f3f
#define mid(a,b) ((a+b)>>1)
#define IN freopen("in.txt","r",stdin);
using namespace std;

char str[maxn];
int pre[maxn];
int len[maxn];

int main()
{
    //IN;

    int n;

    while(gets(str) != NULL)
    {
        int sz = strlen(str); str[sz] = ' ';

        int flag = 0, last = 0, cnt = 0;
        memset(pre, 0, sizeof(pre));
        for(int i=0; i<=sz; i++, cnt++) {
            if(str[i+1] == ' ') pre[i] = i;
            else pre[i] = i==0? 0:pre[i-1];

            if(!flag && str[i] != ' ') {
                flag = 1;
                last = i;
                cnt = 0;
            }

            if(flag && str[i] == ' ') {
                flag = 0;
                len[last] = cnt;
            }
        }

        int a,b; scanf("%d %d\n", &a,&b);
        for(int i=a; i<=b; i++) {
            int cur = 0, ans = 0;
            while(cur < sz) {
                ans += len[cur] + 1;
                cur = pre[min(cur+i-1, sz-1)] + 2;
            }
            printf("%d\n", ans-1);
        }
    }

    return 0;
}
