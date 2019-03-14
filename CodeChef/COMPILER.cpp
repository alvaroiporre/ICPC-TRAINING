#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string cad;
    cin>>n;
    while(n--){
        cin>>cad;
        int open=0, bien=0;
        for(int i=0;i<cad.size();i++){
            if(cad[i]=='<')open++;
            else{
                open--;
                if(open==0)bien=max(bien,i+1);
                else if(open<0) break;
            }
        }
        cout<<bien<<endl;
    }
    return 0;
}
