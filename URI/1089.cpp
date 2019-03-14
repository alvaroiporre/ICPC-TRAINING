#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    while(cin>>n&&n!=0){
        vector<int>a;
        int picos=0;
        while(n--){
            cin>>x;
            a.push_back(x);
        }
        a.push_back(a[0]);
        a.push_back(a[1]);
        bool ac=false,dec=false;
        for(int i=1;i<a.size()-1;i++){
            if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1]))picos++;
        }


        cout<<picos<<endl;

    }


    return 0;
}
