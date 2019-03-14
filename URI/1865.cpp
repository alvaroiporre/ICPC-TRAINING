#include<iostream>
using namespace std;
int main(){
    int n,u;
    cin>>n;
    while(n--){
        string pal;
        cin>>pal>>u;
        if(pal=="Thor")cout<<"Y\n";
        else cout<<"N\n";
    }

    return 0;
}
