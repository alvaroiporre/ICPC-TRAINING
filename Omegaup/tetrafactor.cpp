#include <iostream>


using namespace std;

bool tetra(long long int a){
    long long int i=2, j=2;
    while(j<=(a/2)){
        if(a%j==0){ i++;
        }
        j++;
    }
    if(i==4) return true;
    return false;
}
int main(){
    long long int n, i=0, j=0;

    cin>>n;

    while(j<n){
        if(tetra(i)) j++;
        i++;
    }
    cout<<i-1;

    return 0;
}
