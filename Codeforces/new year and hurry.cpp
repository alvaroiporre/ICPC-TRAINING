
#include <iostream>
using namespace std;

int main(){
    int n, k, i=1;
    cin>>n>>k;
    while(k+(i*5)<=240&&i<=n){
        k+=(i*5);
        i++;
        //cout<<k<<endl;
    }
    cout<<i-1<<endl;
    return 0;
}
