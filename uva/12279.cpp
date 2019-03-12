
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,y,cas=1;

    while(cin>>n&&n>0){
        int cer=0,m=0;
        //vector<int>num;
        while(n--){
            cin>>y;
            if(y==0)cer++;
            else{
                //num.push_back(y);
                m++;
            }
        }
        cout<<"Case "<<cas<<": ";

        cout<<m-cer<<endl;

        cas++;
    }
    return 0;
}
