
#include  <iostream>

using namespace std;

int main(){
    long long n, c, np=1;
    cin>>n>>c;
    long long palabras[n];
    cin>>palabras[0];
    for(long long i=1;i<n;i++){
        cin>>palabras[i];
        if(palabras[i]-palabras[i-1]>c){
            np=1;
        }
        else np++;
    }
    cout<<np;
    return 0;
}
