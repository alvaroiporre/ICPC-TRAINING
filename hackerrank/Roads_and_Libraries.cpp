#include <bits/stdc++.h>
int p[100008];
using namespace std;


int find_(int a){
    //cout<<a<<"find\n";
    if(p[a]==a)return a;
    return p[a]=find_(p[a]);
}
void union_(int a,int b){
    p[find_(a)] = find_(b);
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        long x;
        long y;
        int comp=0;
        cin >> n >> m >> x >> y;
        for(int i=1;i<=n;i++)p[i]=i;
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            union_(city_1,city_2);
        }
        //cout<<comp<<"comp1\n";
        for(int i=1;i<=n;i++){
            if(i==find_(i))comp++;
        }
        long long c1,c2;
        c1=x*n;
        c2=(n-comp)*y+x*comp;
        if(c1<c2)cout<<c1<<endl;
        else cout<<c2<<endl;
    }
    return 0;
}
