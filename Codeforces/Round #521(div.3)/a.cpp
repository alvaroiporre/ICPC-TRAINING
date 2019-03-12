#include<bits/stdc++.h>
//typedef long long ll;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> hab(n);
    for(int i=0;i<n;i++){
        cin>>hab[i];
    }
    vector<int> h=hab;
    int cont=0,cont2=0;
    for(int i=1;i<n-1;i++){
        if(hab[i-1]==1&&hab[i+1]==1&&hab[i]==0){
            cont++;
            hab[i+1]=0;
            i++;

        }
    }
    hab=h;
    for(int i=n-1;i>0;i--){
        if(hab[i-1]==1&&hab[i+1]==1&&hab[i]==0){
            cont2++;
            hab[i-1]=0;
            i--;
        }
    }
    cont=min(cont,cont2);
    cout<<cont<<endl;

    return 0;
}
