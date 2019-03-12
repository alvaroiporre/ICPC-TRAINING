#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t --) {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        if (p == 0) {
            if (x == 0)
                cout << 0 << endl;
            else
                cout << -1 << endl;
            continue;
        }
        if (x / gcd (x, y) == p && y / gcd (x, y) == q) {
            cout << 0 << endl;
            continue;
        }
        int k = ceil (1.0 * (y - x) / (q - p) / 1.0);
        if (k * p < x) {
            k = x / p + min (1LL, x % p);
        }
        if (k * q - y < 0)
            cout << -1 << endl;
        else
            cout << k * q - y << endl;
    }

}
