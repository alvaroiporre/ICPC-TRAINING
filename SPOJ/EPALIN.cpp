#include<bits/stdc++.h>
#define MAXN 1000010
#define p 87
typedef unsigned long long ull;

using namespace std;

ull H[MAXN];
ull r_H[MAXN];
ull P[MAXN];

ull hash_(int idx, int len) {
    return H[idx+len-1] - H[idx-1]*P[len];
}

ull r_hash(int idx, int len) {
    if (idx-len > 0)
        return r_H[idx] - r_H[idx-len];
    else return r_H[idx];
}

int main() {
    cin.sync_with_stdio(false);
    string ary;


    while(cin>>ary) {
        if (ary.size() == 1) { cout<<ary<<"\n"; continue; }
        P[0] = 1;
        H[0] = ary[0]-'A'+1;
        r_H[0] = ary[0]-'A'+1;
        for (int i = 1; i <= (int)ary.size(); ++i) {
            H[i] = H[i-1]*p + ary[i]-'A'+1;
            P[i] = P[i-1]*p;
            r_H[i] = P[i]*ary[i] + r_H[i-1]-'A'+1;
        }
        int in =ary.size(), u;
        u=in-1;
        bool yes=false;


        for (int i = 1; i < ary.size(); ++i) {
            if (ary[i-1] == ary[u]) {
                cout<<hash_(i-1, u)*P[u-i-1]<<" "<<r_hash(0, u-i-1)<<">>\n";

            }
        }
        for (int i = 1; i < ary.size(); ++i) {

            if(hash_(i,in)==r_hash(i,in)){
                u=i;
                break;
            }
        }
        cout<<ary;

            for(int i=u-1;i>=0;i--){
                cout<<ary[i];
            }

        cout<<"\n";
    }
    return 0;
}
