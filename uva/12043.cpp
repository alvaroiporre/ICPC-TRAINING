#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
int main(){
    int t,a,b,k;
    long long divi[100005]={0},sumi[100005]={0}; //divi:numero de divisores sumi:suma de divisores
    divi [1] = 1;
    sumi [1] = 1;
    for ( int i = 2; i <= 100000; i++ ) {
        int len = (int) sqrt (i);
        divi [i] = 2;
        sumi [i] = 1 + i;
        for ( int j = 2; j <= len; j++ ) {
            if ( i % j == 0 ) {
                divi [i] += 2;
                sumi [i] += j;
                sumi [i] += (i / j);
            }
        }
        if ( len * len == i ){
            divi [i]--;
            sumi [i] -= len;
        }
    }
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        long long div=0,sum=0;
        for(int it=a;it<=b;it++){
            if((it%k)==0){
                int num=(int)ceil(it/(double)k)*k;
                while(num<=it){
                    div+=divi[num];
                    sum+=sumi[num];
                    num+=k;
                }
            }
        }
        cout<<div<<" "<<sum<<"\n";
    }
    return 0;
}
