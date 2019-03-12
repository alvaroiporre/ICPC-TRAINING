
#include <iostream>

using namespace std;
int main(){
    int n, i;
    cin>>n;
    int vec[n];
    for(i=0;i<n;i++){
        cin>>vec[i];
    }
    for(i=0;i<n-1;i++){
        cout<<vec[i]+vec[i+1]<<" ";

    }
    cout<<vec[n-1];
    return 0;
}
