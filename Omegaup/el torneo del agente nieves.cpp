#include <iostream>

using namespace std;

int main(){
    long long n, i,j=2,k=0;

    cin>>n;
    bool b=false;
    for(j=2;j<=n+1;j++){
        i=j;
        while(i>1){

            if(i%2==0){
                i/=2;
                k+=i;
            }
            else{
                k+=((i*(i-1))/2);
                i--;
            }
            if(k==n){
            cout<<j<<"\n";
            b=true;
            break;
            }
        }
        k=0;
    }
    if(b==false){
        cout<<-1;
    }
    return 0;
}
