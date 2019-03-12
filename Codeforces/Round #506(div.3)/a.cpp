#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    string cad;
    cin>>n>>k>>cad;
    int j=0;
    for(int i=1;i<n;i++){
        if(cad[j]==cad[i]){
            j++;
        }else{
            if(j)j=0;
        }
    }

    string a=cad;
    for(int i=0;i<k;i++){
        a+=cad.substr(j,n-j);
    }
    //cout<<a.size()<<endl;
    int i,u=0;
    for(i=0;u<k&&i<a.size()-n;i++){
        //cout<<"llega "<<i<<endl;
        if(a.substr(i,n)==cad)u++;
    }
    cout<<a.substr(0,i+n-1)<<endl;
    return 0;
}
