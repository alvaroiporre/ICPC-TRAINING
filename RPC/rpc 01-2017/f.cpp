#include <iostream>

using namespace std;

int main(){
    int n, k, safe,broken, x;
    cin>>n>>k;
    string estado;
    safe=1;
    broken=k;
    for(int i=0;i<n;i++){
        cin>>x>>estado;
        if(estado=="SAFE"){
            if(x>safe)
                safe=x;
        }
        if(estado=="BROKEN"){
            if(x<broken)broken=x;
        }
    }
    cout<<safe+1<<" "<<broken-1<<endl;
    return 0;
}
