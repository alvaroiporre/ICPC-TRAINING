#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.ignore(0);
    string str;
    while(getline(cin,str)){
        cin.ignore(0);
        int j=0,sum=0,es=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!=' '){
                sum+=(es+j+(int)(str[i]-'A'));
                //cout<<(int)(str[i]-'A')<<endl;
                j++;
            }else{
                j=0;
                es++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
