
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long v[n];
        for (long i = 0; i < n; ++i) {
            cin >> v[i];
        }
        long s = 0;
        bool x=false;
        for (long i = 1; i < n; ++i) {
            if(v[i-1]==v[i]+1||v[i-1]==v[i]-1){

            }
        }
        cout << s << endl;
    }
    return 0;
}
