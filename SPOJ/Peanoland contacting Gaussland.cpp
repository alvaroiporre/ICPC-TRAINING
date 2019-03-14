/*#include <stdio.h>
#include <complex>
using namespace std;

int main() {
    complex<long long> base(-1, 1);
    int p;
    while (scanf("%d", &p) == 1) {
        complex<long long> q(0, 0);
        for (complex<long long> t(1, 0); p; p>>=1, t *= base) {
            if (p&1)
                q = q + t;
        }
        printf("%lld %lld\n", q.real(), q.imag());
    }
    return 0;
}

*/

#include <iostream>

using namespace std;

int tribu(int n){
    if(n==0) return 0;
    if(n==1||n==2) return 1;
    if(n==3) return 2;
    int uno=1, dos=1, tres=2, c=3, aux;
    while(c<n){
        aux=uno+dos+tres;
        uno=dos;
        dos=tres;
        tres=aux;
        c++;
    }
    return aux;
}
int main(){
    int n;

    cin>>n;
    for(int i=0;i<=n;i++)
        cout<<tribu(i)<<endl;
    return 0;
}
