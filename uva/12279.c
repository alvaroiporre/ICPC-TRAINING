#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,y;
    vector<int>num;
    while(cin>>n&&n>0){
        int cas=0,cer=0;
        while(n--){
            cin>>y;
            if(y==0)cer++;
            else num.push_back(y);
        }
        sort(num.begin(),num.end());
    }
    return 0;
}
