
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    int num[2001]={};
    cin>>n;
    while(n--){
        cin>>a;
        num[a]++;
    }
    for(int i=1;i<2001;i++){
        if(num[i])cout<<i<<" aparece "<<num[i]<<" vez(es)\n";
    }
    return 0;
}























int main(){
    int n, f=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        f=f*i;
    }

    cout<<"factorial: "<<n<<endl;
    return 0;
}
