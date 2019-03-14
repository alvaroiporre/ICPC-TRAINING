#include <iostream>
#include <algorithm>
using namespace std;
int ordenar(int vec[], int ta){
    int acum=0, s=0;
    for(int i=0; i<ta-1;i++){
        if(vec[i]>vec[i+1]){
            int j=i;
            while(vec[j]>vec[j+1]&&j>=0){
                swap(vec[j],vec[j+1]);
                acum++;
                j--;
            }
        }
    }
    return acum;
}
int main(){
    int p,k;
    cin>>p;
    while(p--){
        cin>>k;
        int vec[k];
        for(int i=0;i<k;i++){
            cin>>vec[i];
        }
        int m=ordenar(vec,k);
        cout<<"Optimal train swapping takes "<<m<<" swaps."<<endl;
    }
    return 0;
}
